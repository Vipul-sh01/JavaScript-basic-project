
function sumOfSub(arr){
    let sum = 0;
    let MaxSum = -Infinity;
    for(let i = 0; i<arr.length; i++){
        sum = sum+arr[i];
        MaxSum = Math.max(sum, MaxSum);

        if(sum<0){
            sum = 0;
        }
    }
    console.log(MaxSum);
}

const arr = [2, 3, -8, 7, -1, 2, 3];
sumOfSub(arr)