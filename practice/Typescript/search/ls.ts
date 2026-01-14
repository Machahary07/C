//linear search in typescript

function linearSearch<T>(arr: T[], target: T): number {
    for (let i = 0; i < arr.length; i++) {
        if (arr[i] === target) {
            return i; // Return the index if the target is found
        }
    }
    return -1; // Return -1 if the target is not found
}

// Example usage:
const numbers = [10, 20, 30, 40, 50];
const targetNumber = 30;
const resultIndex = linearSearch(numbers, targetNumber);
console.log(`Element found at index: ${resultIndex}`); // Output: Element found at index: 2

const strings = ["apple", "banana", "cherry", "date"];
const targetString = "cherry";
const resultStringIndex = linearSearch(strings, targetString);
console.log(`Element found at index: ${resultStringIndex}`); // Output: Element found at index: 2