const arr = [2,4,5,6,3,7];

function reversed(arr){
    const n = arr.length;
    for(let i = 0; i<n/2;i++){
        let temp = arr[i];
        arr[i] = arr[n-i-1];
        arr[n-i-1] = temp;
    }
}

reversed(arr);
console.log(arr);