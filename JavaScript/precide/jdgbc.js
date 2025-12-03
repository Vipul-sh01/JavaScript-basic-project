var intToRoman = function(num) {
    const roman = {
        'M': 1000,
        'CM': 900,
        'D': 500,
        'CD': 400,
        'C': 100,
        'XC': 90,
        'L': 50,
        'XL': 40,
        'X': 10,
        'IX': 9,
        'V': 5,
        'IV': 4,
        'I': 1
    };

    let result = "";
    const keys = Object.keys(roman); 

    for (let i = 0; i < keys.length; i++) {
        const symbol = keys[i];
        const value = roman[symbol];

        while (num >= value) {
            result = result + symbol; 
            num = num - value;       
        }

        // while (7 >= 5) {  // ✅ True
        //     result = result + 'V';  // result = "V"
        //     num = num - 5;       // num = 2
        // }
        
        // while (2 >= 1) {  // ✅ True
        //     result += 'I';  // result = "VI"
        //     num -= 1;       // num = 1
        // }
        
        // while (1 >= 1) {  // ✅ True
        //     result += 'I';  // result = "VII"
        //     num -= 1;       // num = 0
        // }
        
    }

    return result;
};


console.log(intToRoman(7));   

