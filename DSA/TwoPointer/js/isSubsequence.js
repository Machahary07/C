//lc 392 Is Subsequence
/**Given two strings s and t, return true if s is a subsequence of t, or false otherwise.
 * A subsequence of a string is a new string that is formed from the original string by deleting some (can be none)
 * of the characters without disturbing the relative positions of the remaining characters.
 * (i.e., "ace" is a subsequence of "abcde" while "aec" is not).
 *
 * Example 1:
 * Input: s = "abc", t = "ahbgdc"
 * Output: true
 * 
 * Example 2:
 * Input: s = "axc", t = "ahbgdc"
 * Output: false
 * 
 * Tags: Two Pointers, String, Dynamic Programming
 * 
 * Ways to solve LC 392
 * 1. Two Pointers (Greedy) – most common, optimal ⭐
 * 2. Recursion – same logic, different form ❌
 * 3. Dynamic Programming (LCS-style) – overkill but valid ❌
 * 4. Preprocessing + Binary Search – for multiple queries ⭐ but longer code ❌
 **/

var isSubsequence = function(s, t) {
    let i = 0, j = 0;

    while (i < s.length && j < t.length) {
        if (s[i] === t[j]) {
            i++;
        }
        j++;
    }

    return i === s.length;
};

console.log("(abc, ahbgdc):", isSubsequence("abc", "ahbgdc")); //true
console.log("(axc, ahbgdc):", isSubsequence("axc", "ahbgdc")); //false

//time: O(n) where n is the length of t
//space: O(1)