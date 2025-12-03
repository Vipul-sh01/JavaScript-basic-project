function isEng(s){
    return (s.toLowerCase() >= "a" && s.toLowerCase() <= "z");
}
var reverseOnlyLetters = function(s) {
    const char = s.split('');
    let i = 0;
    let j = s.length -1;

    while(i<j){
        if(!isEng(char[i])){
            i++;
        }
        else if(!isEng(char[j])){
            j--;
        }
        else{
            let temp = char[i];
            char[i] = char[j];
            char[j] = temp;
            i++;
            j--;
        }
    }
    console.log(char.join(''));
};

const s = "z<*zj"; 

reverseOnlyLetters(s)





