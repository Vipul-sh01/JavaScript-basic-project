//Using a Constructor Function

function createUser(name, age){
    this.name = name;
    this.age = age;

    this.fun = function (){
        console.log(`${name} and ${age}`);
    }
}

const newUser = new createUser('vipul', 21)
newUser.fun();

//Alternate Modern Approach Using Classes

class demoUser{
    constructor(name, age){
        this.name = name;
        this.age = age;
    }
    fun(){
        console.log(`${this.name} and ${this.age}`);
    }
}

const mainUser = new demoUser('sakshi', 19);
mainUser.fun();

//ProtoTypes in JavaScripts...

function One(user, score){
    this.user = user;
    this.score = score;
}

One.prototype.printMe = function(){
    console.log(`${this.user} and ${this.score}`);
}

const getUser = new One('vipul', 879);
getUser.printMe();