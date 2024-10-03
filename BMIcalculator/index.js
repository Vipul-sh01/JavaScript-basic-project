// const form = document.querySelector('form');

// form.addEventListener('submit', function(e){
//     e.preventDefault();
//     const height = parseInt(document.querySelector('#height').value);
//     const weight = parseInt(document.querySelector('#weight').value);

//     if (isNaN(height) || height <= 0) {
//         results.innerHTML = `Please enter a valid height.`;
//     }
//     else if (isNaN(weight) || weight <= 0) {
//         results.innerHTML = `Please enter a valid weight.`;
//     }
//     else {
//         const bmi = (weight / ((height * height) / 10000)).toFixed(2);
//         results.innerHTML = `<span>Your BMI is: ${bmi}</span>`;
//     }
// })

function calculateBMI() {
    const height = document.getElementById('height').value;
    const weight = document.getElementById('weight').value;
    if (height && weight) {
        const bmi = (weight / ((height / 100) ** 2)).toFixed(2);
        if(bmi < 18.6){
            document.getElementById('result').textContent = 'Underweight: '+ bmi;
        }
        else if(bmi>=18.6 && bmi<24.9){
            document.getElementById('result').textContent = 'Normal: ' + bmi;
        }
        else{
            document.getElementById('result').textContent = 'Over weight: ' +bmi;
        }
    } else {
        document.getElementById('result').textContent = 'Please enter valid height and weight.';
    }
}