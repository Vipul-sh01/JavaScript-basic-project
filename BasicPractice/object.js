// Q1: what is object in javascript?
// Ans: An object is a collection of properties, and a property is an association between a name (or key) and a value.

// what is Singleton object?
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
// output: UserName { name: 'vipul', age: 22, address: 'pune' }. which is a singleton object.



