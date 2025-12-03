const socket = io('https://2663-103-226-203-9.ngrok-free.app');


socket.on('connect', () => {
    console.log('Connected to server');
});

