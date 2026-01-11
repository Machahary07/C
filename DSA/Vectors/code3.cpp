#include <iostream>
#include <vector>
using namespace std;

int main() {

    vector<int> vec = {1,2,3,4,5};
    cout << "VECTOR FUNCTIONS" << endl;
    cout << "Vector elements: ";
    for (int i : vec) {
        cout << i << " ";
    }
    cout << endl;
    cout << "vec.size: " <<vec.size() << endl; //prints 5
    cout << "vec.capacity: " << vec.capacity() << endl; //prints 5
    cout << "vec.front: " << vec.front() << endl; //prints 1
    cout << "vec.back: " << vec.back() << endl; //prints 5
    cout << "vec.at(2): " << vec.at(2) << endl; //prints 3
    cout << "vec.data(): " << vec.data() << endl; //prints address of first element
    vec.push_back(6); //adds 6 at the end
    cout << "After push_back(), vec.size: " << vec.size() << endl;
    vec.pop_back(); //removes last element
    cout << "After pop_back(), vec.size: " << vec.size() << endl;
    return 0;
};