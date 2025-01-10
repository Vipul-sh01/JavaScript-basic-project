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
// enclosed in curly braces {}.
// const Person = {
//     name: 'vipul',
//     age: 22,
//     address: 'pune'
// }

// console.log(Person);


const MySymbol = Symbol();// Symbole is primitive data types which is used for key as assing a unice value in object,

const Person = {
    name: 'vipul',// behind the Scene name look like "name" in String form;
    age: 21,
    email: 'vipul@gmail.com',
    // MySymbol: 'Call me', // there is MySymbol not accessable. if we wannt access so currect Syntext is [],
    [MySymbol]: 'Call me',
    "full name": 'Vipul sharma',
    loginDay: ['monday', 'sunday']
}

console.log(Person.name);
console.log(Person["name"]); //Access propertise by [] methods.
console.log(Person[MySymbol]);
// console.log(typeof MySymbol);
console.log(Person['full name']);

Person.age = 22;
console.log(Person);
// Object.freeze(Person);// freeze Objects
Person.age = 23;
console.log(Person);


Person.greeting = function Hello(){ // add function in Object
    console.log(`hello vipul ${this.name}`);
}

console.log(Person.greeting());

console.log(Person.loginDay);
console.log(typeof loginDay);

// const obj = new Object();

const obj = {};

obj.name = 'vipul';
obj.age = 21;
obj.isloggin = false;

console.log(Object.keys(obj));//importent 
console.log(Object.values(obj));
console.log(obj.hasOwnProperty('isloggin'));
console.log(obj);


const owner1 = {
    1: 'a',
    2: 'b',
    3: 'c',
}

const owner2 = {
    4: 'b',
    5: 'n',
    7: 'k',
}

console.log(Object.assign({}, owner1, owner2)); // Object.assing is method used for merge two objects
const owner3 = {...owner1, ...owner2}; // merge two obeject by spred operators.
console.log(owner3);

// Nesting Object

const NestedObject = {
    name: 'vipul',
    fullName: {
        name: 'sharma',
        age: 21,
        address: {
            village: 'sakarauli',
            post: 'badhupar',
        }
    }

}

console.log(NestedObject);
console.log(NestedObject.fullName.address.post);


const AllUser = [
    user1 = {
        id: 1,
        name:'vipul',
    },
    user2 = {
        id: 1,
        name:'sharma',
    },
    user3 = {
        id: 1,
        name:'vipul',
    }
]

console.log(AllUser[1].name);

