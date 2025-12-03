class Sum {
    constructor(a, b) {
        this.a = a;
        this.b = b;
        this.displaySum = () => {
            console.log(this.a + this.b);
        };
    }
}

// Usage
const obj = new Sum(3, 7);
obj.displaySum(); // Output: 10




