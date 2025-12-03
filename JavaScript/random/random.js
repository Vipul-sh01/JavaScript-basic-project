class SayMyName {
    #name;  
    #age;   
    
    constructor() {
      this.amount = 0; 
    }

    #say(name, age) {
      this.#name = name;
      this.#age = age;
      console.log(`Name: ${this.#name}, Age: ${this.#age}`);
    }
  
    getName() {
      return this.#name.toUpperCase();
    }
    getAge() {
      return this.#age;
    }
  
    setAndSay(name, age) {
      this.#say(name, age); 
    }
  }
  
  class SayYourName extends SayMyName {
   
  }
  
  const obj = new SayYourName();
  obj.setAndSay("vipul", 21);
  console.log(obj.getName());  
  console.log(obj.getAge());   
  