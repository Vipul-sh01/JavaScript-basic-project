class StringTrim {
    trueTrim(data) {
        console.log(`Get real trim length: ${data.trim().length}.`);
    }
}

const clear = new StringTrim();
clear.trueTrim('Vipul    ');

String.prototype.trueTrim = function (){
    console.log(`get real trim ${this.trim().length}.`);
}

const newData = 'Vipul       ';
newData.trueTrim();

'vipul   '.trueTrim();
