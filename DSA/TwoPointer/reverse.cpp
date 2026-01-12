// Algorithm: Reverse an Array using Two Pointer Technique
// Start the program.
// Read the size of the array n.
// Read n elements into the array arr.
// Initialize pointer left = 0. (Because array indexing starts from 0)
// Initialize pointer right = n - 1. (Because last index is n-1)
// Repeat while left < right. (Because we need to swap until the pointers meet)
// Swap arr[left] and arr[right]. 
// Increment left by 1. (To move towards the center)
// Decrement right by 1. (To move towards the center)
// Stop when pointers meet and print the reversed array.

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    void reverseArray(vector<int>& arr) {
        int left = 0;                 // left pointer at start
        int right = arr.size() - 1;   // right pointer at end

        while (left < right) {        // swap until pointers meet
            int temp = arr[left];
            arr[left] = arr[right];
            arr[right] = temp;

            left++;                   // move towards center
            right--;
        }
    }
};

int main() {
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter " << n << " elements:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    Solution sol;
    sol.reverseArray(arr);

    cout << "Reversed array:" << endl;
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}