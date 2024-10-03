document.addEventListener('click', function(event) {
    const circle = document.createElement('div');
    circle.classList.add('circle');
    circle.style.left = event.clientX - 25 + 'px'; 
    circle.style.top = event.clientY - 25 + 'px';  
    document.body.appendChild(circle);
});