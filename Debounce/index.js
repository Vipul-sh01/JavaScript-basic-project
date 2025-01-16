/*
Debounce in JavaScript is a technique used to limit the rate at which a function is called. 
It ensures that a function is only executed after a certain amount of time has passed since the last event, 
rather than being triggered immediately every time an event happens.


Key Benefits of Debounce:
Performance optimization: Avoids making too many function calls in quick succession (e.g., multiple API calls).
Better user experience: Ensures that actions like searching or resizing happen at the right moment, not too frequently.

*/


function Debounce(fun, delay){
    let timeOut;
    return function(){
        clearTimeout(timeOut);
        timeOut = setTimeout(fun, delay);
    }
}

function sayMyName(){
    console.log('vipul sharma');
}

document.querySelector('#btn').onclick = Debounce(sayMyName, 2000);
