console.log('Start');

setTimeout(()=>{
    console.log('TimeOut');
},0)

Promise.resolve().then(()=>{
    console.log('Prpmise');
})

console.log('end');
