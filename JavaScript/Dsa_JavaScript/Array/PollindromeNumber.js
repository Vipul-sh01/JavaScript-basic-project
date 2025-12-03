
function checkPollin(num){
    const str = num.toString();
    const n = str.length;
    let i = 0;
    let j = n-1;
    console.log(j);
    

    while(i<j){
        if(str[i] !== str[j]){
            return false;
        }
        i++;
        j--;
    }
    return true;
    
}

const r = checkPollin(111);
if(r === true){
    console.log('yes');
}
else{
    console.log('no');
}