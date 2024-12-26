// function sum(a, b) {
//     return a + b;
// }

// function cal(a, b, cb) {
//     console.log(cb(a, b));
// }



/* callback is function that is passed as an argument to another function. 
the function that accept other function as argument is called higher order function.
*/ 


// sum excute as callbak function.
// cal(2, 3, sum)


// console.log('vipul');

// function sayhello(){
//     console.log('heloo');
// }

// sayhello excute as callbak function.
// setTimeout(sayhello, 2000);

// console.log('sharma');


// const hell0 = () => {
//     console.log('vipul sharma');
// }
// hell0();

// setTimeout(() => {
//     console.log('vipul');
    
// }, 1000);


function getData(data, netData){
    setTimeout(() =>{
        console.log('Data', data);
       if(netData){
        netData();
       }
    }, 2000)
}

// function callfun(){
//     getData(2);
// }

// getData(1, callfun);



getData(1, () => {
    console.log("Data fetiching...");
    getData(2, () => {
        console.log("Data fetiching...");
        getData(3, () =>{
            console.log("Data fetiching...");
            getData(4)
        })
    });
});



// const gettData = (data) =>{
//     console.log('Data', data);
// }

// gettData(3);

// const getData = (Data, cb)=>{
//     setTimeout(() =>{
//         console.log('Data', Data);
//         if(cb){
//             cb();
//         }
//     }, 2000)
// }

// getData(1, () => {
//     getData(2);
// })


/*
Advantages of using callback functions:
1. Asynchronous Execution:
2. Code Reusability:
3. Custom Behavior:
4. Event Handling:
5. Foundation for Promises and async/await:
 */

