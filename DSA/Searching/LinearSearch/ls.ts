//linear search simple in typescript

function linearSearchh(arr: number[], target: number): number[] {
    const result: number[] = [];
    for (var i = 0; i < arr.length; i++) {
        if (arr[i] === target) {
            result.push(i);
        }
    }
    return result;
}

//Example Usage:
const arr = [4, 2, 3, 5, 2, 1, 2]; 
const targetValue = 2;
const indices = linearSearchh(arr, targetValue);
console.log(indices); // Output: [1, 4, 6]