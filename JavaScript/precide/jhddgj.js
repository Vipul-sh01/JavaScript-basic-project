const S = "shv@jjh$bcb";

function isChar(s) {
    return (s >= "0" && s <= "9") || (s.toLowerCase() >= "a" && s.toLowerCase() <= "z");
}


function san(str){
    let i = 0;
    let j = str.length - 1;
    const char = str.split('');
    
    while(i<j){
        if(!isChar(char[i])){
            i++;
        }

        if(!isChar(char[j])){
            j--;
        }
        else{
            temp = char[i];
            char[i] = char[j];
            char[j] = temp;

            i++;
            j--;
        }
    }
    console.log(char.join(''));
    
}

san(S);