// A clouser is a function that has access to the outer function scope even after the outer function has finished executing.
// In the example, the innerFunction has access to the name variable even after the OuterFunction has finished executing.
// This is called a clouser.


function OuterFunction(){
    const name = 'Vipul';
    return function innerFunction(){
        return function innerInnerFunction(){
            console.log(name);
        }
    }
}

OuterFunction()()();