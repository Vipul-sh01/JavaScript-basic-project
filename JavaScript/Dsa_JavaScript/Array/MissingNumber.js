/*
Here’s a simplified algorithm:

* Find the largest number in the array (n = max of array).
* Calculate total sum of numbers from 1 to n (totalSum = n * (n + 1) / 2).
* Find the array's sum (arrSum = sum of array elements).
* Missing number = totalSum - arrSum.
* This algorithm has a time complexity of O(n) and space complexity of O(1).


*/




const arr = [1,2,3,9];
function MissingNum(arr){
    const n = Math.max(...arr);// this will give the full lenghth between 1 to n; // first number is 1 and last number is 9.
    //  if change the last number to 6 then n will be 6. ...arr used to spread the array and get the max number.
    console.log(n);
    
    let totalSum = (n*(n+1))/2;

    let arrSum = arr.reduce((sum, num)=>sum+num,0);

    return totalSum - arrSum;
}

console.log(MissingNum(arr));


