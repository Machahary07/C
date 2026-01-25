//lc 217
/**Given an integer array nums, return true if any value appears at least twice in the array, 
 * and return false if every element is distinct.
 * 
 * Example 1:
 * Input: nums = [1,2,3,1]
 * Output: true
 * 
 * Example 2:
 * Input: nums = [1,2,3,4]
 * Output: false
 **/

var containsDuplicate = function(nums) {
    const map = {};
    for (let i = 0; i < nums.length; i++) {
        if (map[nums[i]] !== undefined) {
            return true;
        }
        map[nums[i]] = i;
    }
    return false;
}

console.log(containsDuplicate([1,2,3,1])); //true
console.log(containsDuplicate([1,2,3,4])); //false