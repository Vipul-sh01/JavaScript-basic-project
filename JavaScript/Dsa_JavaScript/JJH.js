const arr = [1,2,3,5,6];

function maxiMum(arr){
    let maxl = 0;
    for(let i = 0; i<arr.length; i++){
        if(arr[i]>maxl){
            maxl = arr[i];
        }
    }
    
    let totalsum = maxl*(maxl+1)/2;

    let sum = 0;
    for(let i = 0; i<arr.length; i++){
        sum = sum +arr[i];
    }
    console.log(totalsum - sum);
    
        
}

maxiMum(arr);

