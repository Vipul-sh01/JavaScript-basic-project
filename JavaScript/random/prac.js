
const a = [1, 0, 1, 0];

function sort(a){
    let n = a.length;
    let k = 0;
    for(let i = 0; i<n; i++){
        if(a[i] != 1){
           a[k] = 0;
           k++; 
        }
    }

    while(k<n){
        a[k] = 1;
        k++;
    }

    for(let i = 0; i<n; i++){
        console.log(a[i]);

    }
}

sort(a);