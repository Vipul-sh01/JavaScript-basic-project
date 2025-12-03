const a = [7, 3, 6, 4];

function second(a){
    let f = -Infinity;
    let s = -Infinity;
    for(let i = 0; i<a.length; i++){
        if(a[i]>f){
            s = f;
            f = a[i];
        }
        else if(a[i]>s){
            s = a[i];
        }
    }
    console.log(s);
    
}

second(a);

