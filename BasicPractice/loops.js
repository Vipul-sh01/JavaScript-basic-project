const array = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10];
// array.forEach(i => {
//     let c = i*2;
//     console.log(c);
// });

// for(let i = 0; i<array.length; i++){
//     let c = array[i]*2;
//     console.log(c);
// }

// array.forEach((i)=>{
//     let c = (i +' vipul');
//     console.log(c);
// });

array.map((i)=>{
    let c = (i +' vipul');
    console.log(c);
});

// Q1: Diffrence between forEach and map:

// forEach: forEach is a method that executes a provided function once for each array element.
// map: map is a method that creates a new array with the results of calling a provided function on every element in the calling array.

// forEach: forEach does not return anything.
// map: map returns a new array with the results of calling a provided function on every element in the calling array.

// forEach: forEach is used when you want to do something with each element of the array.
// map: map is used when you want to create a new array with the results of calling 
// a provided function on every element in the calling array.