async function fetchAdvocates() {
    try {
        const baseUrl = 'https://probono-doj.in/list-of-advocates.html';
        const response = await fetch(`${baseUrl}?AdvocateSearch[bar_council]=5&page=1&per-page=50`);

        if (!response.ok) {
            throw new Error(`Failed to load advocates: ${response.status}`);
        }

        const text = await response.text();
        const parser = new DOMParser();
        const doc = parser.parseFromString(text, 'text/html');
        const rows = doc.querySelectorAll('table tr');

        const advocates = Array.from(rows).slice(1).map(row => {
            const cells = row.querySelectorAll('td');
            return {
                name: cells[1]?.textContent.trim() || '',
                enrollmentNo: cells[2]?.textContent.trim() || '',
                registrationNo: cells[3]?.textContent.trim() || '',
            };
        });

        console.log(advocates); // Print data to console
        return advocates;
    } catch (error) {
        console.error('Error fetching advocates:', error);
    }
}

// Call the function
fetchAdvocates();
