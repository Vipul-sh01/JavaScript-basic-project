const arr = [2,3,2,4,5,5];

function nonrepeatin(arr){
    for(let i = 0; i<arr.length; i++){
        let l = false;
        for(let j = 0; j<arr.length; j++){
            if(i !== j && arr[i] === arr[j]){
                l = true;
            }
        }

        if(!l){
            console.log(arr[i]);
        }
    }
}

nonrepeatin(arr);