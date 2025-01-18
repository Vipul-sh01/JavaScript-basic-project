const URL = 'https://api.restful-api.dev/objects';

//real life example of Debonce function

function Debonce(fun, delay) {
    let timeOut;
    return function (...args) {
        clearTimeout(timeOut);
        timeOut = setTimeout(() => {
            fun.apply(this, args);
        }, delay);
    };
}

const geteData = async ()=>{
   try {
     const Responce = await fetch(URL);
     if(!Responce.ok){
        throw new Error('milega kyo nhi bhai')
     }
     const data = await Responce.json()
     console.log(data);
   } catch (error) {
    console.log('ye to hona hi tha bhai');
   } finally{
    console.log('bhai mai manna nhi karta');
   }
}


document.querySelector('#btn').onclick = Debonce(geteData, 2000);