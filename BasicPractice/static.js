// A static keyword is used to define a static method for a class. 
// Static methods are called without creating an object of the class. 
// Static methods are often used to create utility functions for an application. 
// Static methods are defined using the static keyword followed by the method name. 
// Static methods can only access static properties and methods of the class. 
// Static methods are called using the class name followed by the method name. 
// Static methods are called without creating an object of the class. 
// Static methods are often used to create utility functions for an application. 
// Static methods are defined using the static keyword followed by the method name. 


class Boy{
    static name; // static properties
    static age;

    static fun(){ // static method
        console.log(`${this.name}, and ${this.age}`);
    }
} 

// not need to create the object of the class. becourse the method is static.
Boy.name = 'vipul';
Boy.age = 21;
Boy.fun();