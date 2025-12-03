const Url = 'https://probono-doj.in/list-of-advocates.html'; // Url to fetch data from


document.getElementById('btn').addEventListener('click', ()=>{ // event listener on button click. 
    const fetchData = async ()=>{// async function to fetch data from the Url. async is a keyword that is used to create an asynchronous function.
    //  it returns a promise.
        const response = await fetch(Url);// fetch is a method that is used to fetch data from the Url.
        // used fetch method allows you to make network requests similar to XMLHttpRequest (XHR).
        // The main difference is that the Fetch API uses Promises, 
        // which enables a simpler and cleaner API, 
        // avoiding callback hell and having to remember the complex API of XMLHttpRequest


        //fetch method returns a promise that resolves to the Response to that request, whether it is successful or not.

        
        try {
            if(!response.ok){
                throw new Error('Network response was not ok');
            }
            const data = await response.json();
            document.getElementById('get').innerHTML = JSON.stringify(data[4].name, null, 2);
        } catch (error) {
            console.log(error);
        }
    }
    fetchData();
})

