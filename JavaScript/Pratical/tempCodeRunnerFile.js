console.log('start');

setTimeout(()=>{
    console.log('Timeout');
},0);

function getData(){
    return new Promise((resolve, reject)=>{
        setTimeout(()=>{
            resolve();
        },0)
    })
}
getData().then(()=>{
    console.log('Promise resolved');
})
console.log('end');
