// methed - 1;
// const button = document.querySelectorAll('.button');
// const body = document.querySelector('.bg-color');

// button.forEach(function(button) {
//     button.addEventListener('click', function(e){
//         console.log(e.target);
//         if(e.target.id === 'grey'){
//             body.style.backgroundColor = e.target.id;
//         }
//         if(e.target.id === 'white'){
//             body.style.backgroundColor = e.target.id
//         }
//         if(e.target.id === 'blue'){
//             body.style.backgroundColor = e.target.id;
//         }
//         if(e.target.id === 'yellow'){
//             body.style.backgroundColor = e.target.id;
//         }
//     });
// });

// method - 2;

const button = document.querySelectorAll('.button');
const body = document.querySelector('.bg-color')

const colors = new Set(['grey', 'white', 'blue', 'yellow']);
button.forEach(function(button){
    button.addEventListener('click', function(e){
        const targetColor = e.target.id;
        if(colors.has(targetColor)){
            body.style.backgroundColor = targetColor;
        }
    });
});
