// Q1: what is object in javascript?
// Ans: An object is a collection of properties, and a property is an association between a name (or key) and a value.

// Q2: what is Singleton object?
// Ans: A singleton object is an object which is instantiated exactly once. 
// This is useful when exactly one object is needed to coordinate actions across the system.

// for example: A create A singleton object by constructor function.

class UserName{
    constructor(name, age, address){
        this.name = name;
        this.age = age;
        this.address = address;
    }
}

const user = new UserName('vipul', 22, 'pune');
console.log(user);

// Q4: what is the difference between object and singleton object?
// Ans: A singleton object is an object which is instantiated exactly once.
// An object is a collection of properties, and a property is an association between a name (or key) and a value.



// output: UserName { name: 'vipul', age: 22, address: 'pune' }. which is a singleton object. 
// this not a object literal because it is created by constructor function.
//  There is userName is associated with this object. which is a class name. can confirm by console.log(user.constructor.name);

console.log(user.constructor.name); // output: UserName. which is a class name. and converted in object literal by spread operator.
console.log({...user}); // output: { name: 'vipul', age: 22, address: 'pune' }. which is a object literal. using spread operator.



// Q3: what is object literal?
// Ans: An object literal is a list of zero or more pairs of property names and associated values of an object, 
// enclosed in curly braces ({}).
const Person = {
    name: 'vipul',
    age: 22,
    address: 'pune'
}

// console.log(Person);
