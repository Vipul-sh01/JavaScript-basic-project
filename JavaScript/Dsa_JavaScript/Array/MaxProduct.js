const arr = [0,-2,-3,0];

function say(arr){
    let n = arr.length;

    if (n === 0) return 0;

    let m = 1;
    let mx = -Infinity;

    for(let i = 1; i<n; i++){
        m = arr[i]*arr[i-1];
        mx = Math.max(m, mx)
    }
    console.log(mx);
}

say(arr);