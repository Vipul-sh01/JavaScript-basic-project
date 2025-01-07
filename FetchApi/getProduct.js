// const url = 'https://bc62-103-226-203-170.ngrok-free.app/api/v1/books/getAllProduct';

// const fetchData = async ()=>{
//     const response = await fetch(url);
//     const data = await response.json();

//     console.log(typeof data.data);
//     data.data.forEach((book) => console.log(book.title));
   
//     data.data.forEach((i)=> {
//        console.log(i.author);
//     });
// }
// fetchData();


// const apiUrl = 'https://api.hive.blog';

// const fetchData = async () => {
//     const response = await fetch(apiUrl, {
//       method: 'POST',
//       headers: {
//         'Content-Type': 'application/json',
//       },
//       body: JSON.stringify({
//         jsonrpc: '2.0',
//         method: 'bridge.get_discussion',
//         params: {
//           author: 'hiveio',
//           permlink: 'around-the-hive-reflections',
//           observer: 'alice',
//         },
//         id: 1,
//       }),
//     });
//       const data = await response.json();
//       console.log(typeof data); 
// };

// fetchData();

const apiUrl = 'https://api.hive.blog';

const fetchPosts = async () => {
    const response = await fetch(apiUrl, {
      method: 'POST',
      headers: {
        'Content-Type': 'application/json',
      },
      body: JSON.stringify({
        jsonrpc: '2.0',
        method: 'bridge.get_ranked_posts',  
        params: {
          sort: 'trending',  
          tag: '',            
          observer: 'alice',  
        },
        id: 1,
      }),
    });
    const data = await response.json();
    console.log(data);
    console.log(typeof data);
    
};

fetchPosts();