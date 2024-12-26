// A Promise is an object representing the eventual completion or failure of an asynchronous operation. 
// A Promise has three states: 1. Pending, 2. Fulfilled, 3. Rejected.
function getData(Data) {
    return new Promise((resolve, reject) => { // Promise is a constructor function. 
    // there is a callback function that takes two arguments resolve and reject. 
    // reslove is called when the operation is successful and reject is called when the operation is failed.
        setTimeout(() => {
            console.log('Data fetching', Data);
            resolve();
        }, 2000);
    });
}

getData(1)
    .then(() => getData(2)) // Promise chaining. it used to solve the callback hell problem. 
    // callback hell is a situation where you have multiple nested callbacks.
    .then(() => getData(3))
    .catch((error) => {
        console.error('Error:', error);
    });


    