function One(){
    two();
    console.log('One');
}

function two(){
    Three();
    console.log('two');
}

function Three(){
    console.log('Three');
}

One();
// two();
// Three();