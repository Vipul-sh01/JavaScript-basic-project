// Scope:
// var has only function scope,
// let and const has block scope. means {},


function example() {
    if (true) {
        var x = 10; 
        let y = 20; 
        const z = 30; 
        console.log(y); //here is accessible of let.
        
    }
    console.log(x); 
    // console.log(y); // Error: y is not defined. Becouse let isn't accessible from outside {}.
    // console.log(z); // Error: z is not defined
}
example();
// console.log(x);// Error: Becouse var isn't accessible from outside function scope.

// Hoisting:


// var a = 45;
// console.log(a);



processData();

function processData() {
    console.log("Processing...");
}

var data = fetchData();
console.log(data);
function fetchData() {
    return "Sample Data";
}

console.log(a); // undefined (hoisted)
var a = 10;

// console.log(b); // Error: Cannot access 'b' before initialization
// let b = 20;

// console.log(c); // Error: Cannot access 'c' before initialization
// const c = 30;


// Mutability:

var x = 10;
x = 20; // Reassignment allowed
var x = 30; // Re-declaration allowed
console.log(x);

let k = 40;
k = 50;
k = 37 // Reassignment allowed
//let k = 60; // Error: Cannot re-declare
console.log(k);


const l = 70;
// l = 80; // Error: Cannot reassign
console.log(l);


const obj = { key: "value" };
obj.key = "newValue"; // Allowed: Object properties are mutable
// obj = {}; // Error: Cannot reassign the object itself
console.log(obj);
