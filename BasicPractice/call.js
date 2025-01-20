function One(user){
    this.user = user;
}

function Two(user,name, age){
    One.call(this,user);//One.call(this, user) allows the Two function to extend the properties of One. 
    // This approach is called constructor borrowing or constructor chaining in JavaScript.
    this.name = name;
    this.age = age;
}


const obj1 = new Two('sakshi','vikash', 21);
console.log({...obj1});

for(const [key, value] of Object.entries(obj1)){
    console.log(`${key}: ${value}`);
}



//importent...
function One(user) {
    this.user = user;
}

function Two(user, name, age) {
    One.call(this, user); // Borrow the constructor of One
    this.name = name;
    this.age = age;
}

// Set up prototype inheritance
Two.prototype = Object.create(One.prototype);
Two.prototype.constructor = Two;

// Example usage
const obj = new Two('sakshi', 'vikash', 21);
console.log(obj);

// Access the properties
console.log(obj.user); // Logs: sakshi
console.log(obj.name); // Logs: vikash
console.log(obj.age);  // Logs: 21

// Add a method to One and see if Two inherits it
One.prototype.sayHello = function () {
    return `Hello, ${this.user}`;
};

console.log(obj.sayHello()); // Logs: Hello, sakshi
