//leetcode 1: Two Sum in Typescript using Hash Map
// https://leetcode.com/problems/two-sum/
function twoSumLocal(nums: number[], target: number): number[] { //
    const numMap = new Map(); // Create a new Map to store numbers and their indices
    for (let i = 0; i < nums.length; i++) { // Iterate through each element in the array
        const complement = target - nums[i]; // Calculate the complement that would sum up to the target
        if (numMap.has(complement)) { // Check if the complement exists in the map
            return [numMap.get(complement), i]; // If found, return the indices of the complement and the current number
        }
        numMap.set(nums[i], i); // If not found, add the current number and its index to the map
    }
    return []; // If no solution is found, return an empty array
};

//Example Usage:
const nums = [2, 7, 11, 15]; 
const target = 9;
const result = twoSumLocal(nums, target);
console.log(result); // Output: [0, 1]