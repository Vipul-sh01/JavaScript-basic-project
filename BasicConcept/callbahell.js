// this is a callback hell example. not a good code for reading and understading. 

function getData(data, netData){
    setTimeout(() =>{
        console.log('Data', data);
       if(netData){
        netData();
       }
    }, 2000)
}

getData(1, () => {
    console.log("Data fetiching...");
    getData(2, () => {
        console.log("Data fetiching...");
        getData(3, () =>{
            console.log("Data fetiching...");
            getData(4)
        })
    });
});
