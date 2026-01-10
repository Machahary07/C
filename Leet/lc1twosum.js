// leetcode 1: Two Sum in Javascript using brute force approach   
// https://leetcode.com/problems/two-sum/
/**
 * @param {number[]} nums
 * @param {number} target
 * @return {number[]}
 */
var twoSum = function(nums, target) { //Here we are creating a function named twoSum that takes an array of numbers (nums) and a target number (target) as input
    for (let i = 0; i < nums.length; i++) { // iterate through each element in the array
        for (let j = i + 1; j < nums.length; j++) { // iterate through the elements after the current element
            if (nums[i] + nums[j] === target) { // check if the sum of the two elements equals the target
                return [i, j]; // return the indices of the two elements
            }
        }
    }
}    

// Example usage:
console.log(twoSum([3, 3, 3, 1], 4));