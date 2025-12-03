class Sya {
    #age; // Private field to encapsulate the `age` variable

    setAge(newAge) {
        if (newAge >= 0) {
            this.#age = newAge;
        } else {
            console.error("Age must be a non-negative number.");
        }
    }

    getAge() {
        console.log(this.#age);
    }
}

const person = new Sya();
person.setAge(25); 
person.getAge();  
person.setAge(-5); 

// By closuser function. there is Laxical scopping;

function sya() {
    let age;

    return {
        setAge(newAge) {
            if (newAge >= 0) {
                age = newAge;
            } else {
                console.error("Age must be a non-negative number.");
            }
        },
        getAge() {
            console.log(age);
        }
    };
}


const person1 = sya();
person1.setAge(25); 
person1.getAge();   
person1.setAge(-5); 
