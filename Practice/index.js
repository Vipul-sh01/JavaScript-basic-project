// document.getElementById('red').onclick = function(){
//     document.body.style.backgroundColor = 'red';
// }
// document.getElementById('green').onclick = function(){
//     document.body.style.backgroundColor = 'green';
// }


// importent feature of javascript. know as clouser 


function clickHandler(color){
    return function(){
        document.body.style.backgroundColor = color;
    }
}

document.getElementById('red').onclick = clickHandler('red');
document.getElementById('green').onclick = clickHandler('green');
document.getElementById('pink').onclick = clickHandler('pink');
