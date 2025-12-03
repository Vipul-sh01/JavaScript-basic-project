function BankAccount(accountHolderName, initialBalance) {
    let balance = initialBalance; 

    this.getBalance = function() {
        return balance;
    };

    this.deposit = function(amount) {
        if (amount > 0) {
            balance += amount;
        } else {
            console.log("Invalid deposit amount!");
        }
    };
    
    this.withdraw = function(amount) {
        if (amount > 0 && amount <= balance) {
            balance -= amount;
        } else {
            console.log("Invalid withdrawal amount!");
        }
    };
}

const myAccount = new BankAccount("John Doe", 1000);
console.log(myAccount.getBalance()); // 1000
myAccount.deposit(500);
console.log(myAccount.getBalance()); // 1500
myAccount.withdraw(200);
console.log(myAccount.getBalance()); // 1300
myAccount.withdraw(1500); // Invalid withdrawal amount!
