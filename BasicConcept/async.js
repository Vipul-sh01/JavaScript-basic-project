function getData(Data){
    return new Promise((resolve, reject)=>{
        setTimeout(()=>{
            console.log('Data', Data);
            resolve('success');
        }, 2000);
    }) 
}

// A async and await is used to solve the callback hell and promise chaining problem.
// async is a keyword that is used to create an asynchronous function. it returns a promise.
// await is a keyword that is used to wait for the promise to be resolved.
//()() IIFE (Immediately Invoked Function Expression) is used to call the async function.
(async function getElement(){
    await getData(1);
    await getData(2);
})();