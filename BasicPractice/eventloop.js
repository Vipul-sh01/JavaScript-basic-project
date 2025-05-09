// envent loop: javascript is single threaded language, it can do one thing at a time.
// event loop is a mechanism that allows node.js to perform Asycronous proformance.


console.log('Start');

setTimeout(()=>{
    console.log('TimeOut');
},0)

Promise.resolve().then(()=>{
    console.log('Prpmise');
})

console.log('end');
