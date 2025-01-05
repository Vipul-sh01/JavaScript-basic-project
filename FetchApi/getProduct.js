const url = 'https://bc62-103-226-203-170.ngrok-free.app/api/v1/books/getAllProduct';

const fetchData = async ()=>{
    const response = await fetch(url);
    const data = await response.json();

    console.log(typeof data.data);
    data.data.forEach((book) => console.log(book.title));
   
    data.data.forEach((i)=> {
       console.log(i.author);
    });
}
fetchData();
