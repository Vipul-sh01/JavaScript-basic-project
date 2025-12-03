function Debonce(fun, delay){
    let timeOut;
    return function(){
        clearTimeout(timeOut);
        timeOut = setTimeout(fun, delay);
    }
}


function CountReal(){
    console.log('vipul sharma');    
}

document.querySelector('#btn').onclick = Debonce(CountReal, 2000);