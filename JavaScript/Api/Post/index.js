// Simulating an API call to fetch products
function fetchProducts(callback) {
    console.log("Fetching products...");
    
    // Simulating network delay
    setTimeout(() => {
      const products = [
        { id: 1, name: "Laptop", price: 1000 },
        { id: 2, name: "Phone", price: 500 },
        { id: 3, name: "Tablet", price: 300 }
      ];
      console.log("Products fetched!");
      callback(products); // Call the callback function with fetched data
    }, 2000);
  }
  
  // Callback function to display the products
  function displayProducts(products) {
    console.log("Displaying products:");
    products.forEach(product => {
      console.log(`${product.id}: ${product.name} - $${product.price}`);
    });
  }
  
  // Using the fetchProducts function with a callback
  fetchProducts(displayProducts);
  