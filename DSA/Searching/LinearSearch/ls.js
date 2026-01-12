//simple linearSearch implementation in javascript
var linearSearch = function (arr, target) {
    for (var i = 0; i < arr.length; i++) {
        if (arr[i] === target) {
            return i;
        }
    }
    return -1;
};
 
//example usage
var arr = [10, 23, 45, 70, 11, 15];
var target = 70;
var result = linearSearch(arr, target);
if (result !== -1) {
    console.log("Element found at index: " + result);
} else {
    console.log("Element not found in the array");
}