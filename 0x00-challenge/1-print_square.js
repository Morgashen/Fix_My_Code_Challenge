#!/usr/bin/node
/*
    Print a square with the character #
    
    The size of the square must be the first argument 
    of the program.
*/

// Check if the size argument is provided
if (process.argv.length <= 2) {
    // Print an error message to the standard error stream
    console.error("Missing argument");
    console.error("Usage: ./1-print_square.js <size>");
    console.error("Example: ./1-print_square.js 8");
    // Exit the program with a non-zero exit code
    process.exit(1);
}

// Parse the size argument as a decimal number
const size = parseInt(process.argv[2], 10);

// Loop from 0 to size - 1
for (let i = 0; i < size; i++) {
    // Initialize an empty string to store the row
    let row = "";
    // Loop from 0 to size - 1
    for (let j = 0; j < size; j++) {
        // Append a "#" character to the row
        row += "#";
    }
    // Print the row to the standard output stream
    console.log(row);
}
