function convert(nums) {
    const boby = {
        v: 20,
        i: 15,
        u: 10,
        p: 5,
        l: 1,
    };

    const ObjectKeys = Object.keys(boby);

    let result = "";
    for(let i = 0; i<ObjectKeys.length; i++){
        const key = ObjectKeys[i];
        const value = boby[key]
        
        while(nums>=value){
            result = result+key;
            nums = nums - value;
        }
    }
    console.log(result);
}

convert(14);