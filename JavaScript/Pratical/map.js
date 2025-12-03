function call(n){
    return n+1;
}

const res = function(n, i) {
    return i % 2 === 0 ? 'even index' : n;
};


var map = function(arr, fn) {
    const result = [];
    for(let i = 0; i<arr.length; i++){
        result.push(fn(arr[i],i));
    }

    return result;
};

const arr = [1,2,3,4];

console.log(map(arr, call));

console.log(map(arr, res)); 
