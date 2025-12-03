/*
To find the first duplicate element in an array (or list), you can use the following algorithm:

* Traverse the array from left to right.
* Use a set to keep track of elements you have already seen. here set is object
* If an element is already in the set, it's the first duplicate.
* If no duplicates are found, return a message indicating this.

*/


const arr = [1,2,3,4,5,6,2,8,9,1];

function duplicate(arr){
    const seen = new Set();

    for(let i = 0; i<arr.length; i++){
        if(seen.has(arr[i])){
            return arr[i];
        }
        seen.add(arr[i]);
    }
    return null;
}

const result = duplicate(arr);
if(result){
    console.log(`The first duplicate element is: ${result}`);
}
else{
    console.log("No duplicate elements found.");
}