// leetcode 1: Two Sum
// https://leetcode.com/problems/two-sum/
/**
 * @param {number[]} nums
 * @param {number} target
 * @return {number[]}
 */
var twoSum = function(nums, target) {
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
// Output: [0, 1]