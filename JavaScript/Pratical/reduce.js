var reduce = function (arr, fun, init){
    let result = init;

    for(let i = 0; i<arr.length; i++){
        result = fun(result, arr[i]);
    }
    return result;
}

function say(a, s){
    return a+s;
}

const arr = [1,2,3];
const init = 0;

console.log(reduce(arr, say, init));
