var romanToInt = function(s) {
    const roman = {
        'M': 1000,
        'D': 500,
        'C': 100,
        'L': 50,
        'X': 10,
        'V': 5,
        'I': 1,
    };

    let result = 0;

    for(let i = 0; i<s.length; i++){
        const current = roman[s[i]];
        const nextc = roman[s[i+1]];

        if(nextc && current < nextc){
            result = result + nextc - current;
            i++;
        }
        else{
            result = result+current;
        }
    }

    console.log(result);
    
};


romanToInt("IV")
