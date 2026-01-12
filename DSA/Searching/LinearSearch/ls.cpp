//simple linear search implementation in cpp
#include <iostream>
using namespace std;

class solution {
public:
    int linearSearch(int arr[], int n, int key) { //declares the function linearSearch with parameters arr (array), n (size of array), key (element to search)
        for (int i = 0; i < n; i++) {
            if (arr[i] == key) {
                return i; //key found at index i
            }
        }
        return -1; //key not found
    }
};