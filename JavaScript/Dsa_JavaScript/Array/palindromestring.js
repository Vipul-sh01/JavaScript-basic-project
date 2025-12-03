function pollidrome(str){
    const n = str.toLowerCase().replace(/[^a-z0-9]/g, '');
    
    let i = 0; 
    let j = n.length-1;

    while(i<j){
        if(n[i] !== n[j]){
            return false;
        }
        i++;
        j--;
    }
    return true;
}

const r = pollidrome('Nitin1')

if(r === true){
    console.log('yes');
}
else{
    console.log('no');
    
}