//lc 169

var mE = function(nums) {
    let freq = {}; // map to store frequency of each element
    let n = nums.length;
    for (let i = 0; i < n; i++) { // hash through the array to count frequencies
        let numsi = nums[i]; // accessing each element of the array
        freq[numsi] = (freq[numsi] || 0) + 1; // counting frequency of each element

        if (freq[numsi] > n/2) { // checking if frequency exceeds n/2
            return numsi; // if it does, return that element
        }
    }
};

// Example usage:
console.log(mE([3,2,3])); // Output: 3