//lc 169
/**
 * Given an array nums of size n, return the majority element. 
 * The majority element is the element that appears more than ⌊n / 2⌋ times. 
 * You may assume that the majority element always exists in the array.
 * 
 * Example 1:
 * Input: nums = [3,2,3]
 * Output: 3
 * 
 * Example 2:
 * Input: nums = [2,2,1,1,1,2,2]
 * Output: 2
 * 
 * @param nums 
 * @returns 
 */

function majorityElement(nums: number[]): number {
    let map = new Map<number, number>();

    let n = nums.length;

    for (const num of nums) {
        map.set(num, (map.get(num) || 0) + 1); // Increment the count for num
    }

    for (const [num, count] of map.entries()) {
        if (count > n / 2) {
            return num;
        }
    }
    return -1; // This line will never be reached as per problem constraints
}

// Example usage:
console.log(majorityElement([2, 2, 1, 1, 1, 2, 2])); // Output: 2