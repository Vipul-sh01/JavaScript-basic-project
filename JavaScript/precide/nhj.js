const arr = [1, 3, 3, 6, 7, 3];

function meh(arr) {
    let candidate = null;
    let count = 0;

    for (let i = 0; i < arr.length; i++) {
        if (count === 0) {
            candidate = arr[i];
            count = 1; // Initialize count for new candidate
        } else if (arr[i] === candidate) {
            count++;
        } else {
            count--;
        }
    }

    console.log(candidate); // This prints the potential majority element
}

meh(arr);
