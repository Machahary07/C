//lc 961
/** 
 * You are given an integer array nums with the following properties:
 * nums.length == 2 * n.
 * nums contains n + 1 unique elements.
 * Exactly one element of nums is repeated n times.
 * Return the element that is repeated n times.
 * 
 * Example 1:
 * Input: nums = [1,2,3,3]
 * Output: 3
 * 
 * Example 2:
 * Input: nums = [2,1,2,5,3,2]
 * Output: 2
 * @param nums 
 * @returns 
 */

function repeatedNTimes(nums: number[]): number {
    const map = new Map<number, number>();

    for (const num of nums) { //const num of nums means iterating through each element of nums array
        if (map.has(num)) { // check if num is already in the map
            return num; // repeated found
        }
        map.set(num, 1); // add num to the map
    }
    return -1; // never reached (problem guarantees an answer) we are just adding this to satisfy the return type
}

console.log(repeatedNTimes([1, 2, 3, 3])); // Output: 3
console.log(repeatedNTimes([2, 1, 2, 5, 3, 2])); // Output: 2

//alternative approach with counting

// function repeatedNTimes(nums: number[]): number {
//     const map = new Map<number, number>();
//     let n = nums.length;
//     for (let i = 0; i < n; i++) {
//         if (map.has(nums[i])) {
//             map.set(nums[i], map.get(nums[i])! + 1); // Increment count of nums[i] 
//         } else {
//             map.set(nums[i], 1);
//         }
//     }
//     for (const [num, count] of map.entries()) {
//         if (count === n / 2) {
//             return num;
//         }
//     }
//     return -1;
// }