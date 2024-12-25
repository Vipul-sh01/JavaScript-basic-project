// A class without constructor. it is a class with properties and methods. it will take defoult constructor.

class UserName{
    name = ''; // properties
    age = ''; // properties

    greet(){
        console.log(`Hello My Name is ${this.name} and ${this.age}`);
    }
}

const user = new UserName(); // creating object of class UserName
user.name = 'vipul';
user.age = '21';
user.greet();


// A class with constructor. it will take the constructor with properties and methods.

class Person{
    constructor(Name, age){
        this.Name = Name;
        this.age = age;
    }
    fun(){
        console.log(`Hello My Name is ${this.Name} and ${this.age}`);
    }
}

const person = new Person('vipul', 21);
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
