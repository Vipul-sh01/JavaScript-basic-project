// A class without constructor. it is a class with properties and methods. it will take defoult constructor.

class UserName{
    name = ''; // properties
    age = ''; // properties

    greet(){ // method
        console.log(`Hello My Name is ${this.name} and ${this.age}`);
    }
}

const user = new UserName(); // creating object of class UserName
user.name = 'vipul'; // setting the value of properties
user.age = '21';
user.greet(); // calling the method of class UserName


// A class with constructor. it will take the constructor with properties and methods.

class Person{
    constructor(Name, age){ // Name and age are properties
        this.Name = Name; // value of properties. this keyword is used to access the properties of the same class.
        this.age = age;
    }
    fun(){
        console.log(`Hello My Name is ${this.Name} and ${this.age}`);
    }
}

// new keyword is used to create the object of the class.

const person = new Person('vipul', 21); // take value of properties as a paremeter in constructor
person.fun();

// A class with constructor. it will take the constructor with properties and methods.


class ApiResponse {
    constructor(statusCode, data, message = "Success"){ 
        this.statusCode = statusCode
        this.data = data
        this.message = message
        this.success = statusCode < 400
    }
}

const respo = new ApiResponse(455, {}, 'vipul');
console.log(typeof respo);
console.log(respo);
