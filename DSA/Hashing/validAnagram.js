//lc 242
/**Given two strings s and t, return true if t is an anagram of s, and false otherwise.
 * An Anagram is a word or phrase formed by rearranging the letters of a different word or phrase, 
 * typically using all the original letters exactly once.
 * 
 * Example 1:
 * Input: s = "anagram", t = "nagaram"
 * Output: true
 * 
 **/

var isAnagram = function(s, t) {
    if (s.length !== t.length) return false;

    const map = {};

    for (let ch of s) { //or for (let i = 0; i < s.length; i++)
        map[ch] = (map[ch] || 0) + 1;
    }

    for (let ch of t) {
        if (!map[ch]) {
            return false;
        }
        map[ch]--;
    }
    return true;
};

console.log(isAnagram("anagram", "nagaram")); //true
console.log(isAnagram("rat", "car")); //false

//time: O(n)
//space: O(1) since the size of the hashmap will be at most 26 for lowercase letters only

//NOTE 1: We can also solve this by sorting both strings and comparing them
//NOTE 2: First divide each of the letters of the string into two different hashmaps and then compare the two hashmaps (basic hashmap comparison)