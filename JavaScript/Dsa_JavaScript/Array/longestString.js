

function findlong(str){
    const keys = str.split(" ");
    const n =  keys.length
    
    let longString = "";
    
    for(let i = 0; i<n; i++){
        if(keys[i].length> longString.length){
            longString = keys[i]; 
        }
    }
    console.log(longString);
    
}

const s ="Note that the word should be built from left to right with each additional character being added to the end of a previous word. ";
findlong(s)