const filter = function(arr, fn){
    let result = [];
    for(let i = 0; i<arr.length; i++){
        if(fn(arr[i], i)){
            result.push(arr[i]);
        }
    }
    return result;
}

function say(n, i){
    return i>0;
}

function say1(n){
    return n<10;
}

const arr = [0,10,20,30];

console.log(filter(arr, say));
console.log(filter(arr, say1));
