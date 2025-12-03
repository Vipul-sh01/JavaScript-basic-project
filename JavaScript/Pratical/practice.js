// Scope:
// var has only function scope,
// let and const has block scope. means {},


function example() {
    if (true) {
        var x = 10; 
        let y = 20; 
        const z = 30; 
        // console.log(y); here is accessible of let.
        
    }
    // console.log(x); 
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

// console.log(a); // undefined (hoisted)
// var a = 10;

// console.log(b); // Error: Cannot access 'b' before initialization
// let b = 20;

// console.log(c); // Error: Cannot access 'c' before initialization
// const c = 30;


// Mutability:

// var a = 10;
// a = 20; // Reassignment allowed
// var a = 30; // Re-declaration allowed
// console.log(a);

let b = 40;
b = 50;
b = 37 // Reassignment allowed
//let b = 60; // Error: Cannot re-declare
// console.log(b);


const c = 70;
c = 80; // Error: Cannot reassign
console.log(c);


// const obj = { key: "value" };
// obj.key = "newValue"; // Allowed: Object properties are mutable
// // obj = {}; // Error: Cannot reassign the object itself
