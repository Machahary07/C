#include <iostream>
#include <vector>
using namespace std;

int main() {
    //vector<int> vec(5,0); //vector with size of 5 elements initialized to 0 i.e. {0,0,0,0,0}
    
    vector<int> vec = {1, 2, 3, 4, 5}; //vector with size of 5 elements
    //cout << vec[4] << endl; //prints 5
    
    for (int i : vec) {
        cout << i << " "; //prints 1 2 3 4 5
    }

    cout << endl;
    
    vector<char> charVec = {'a', 'b', 'c', 'd'};
    cout << charVec[2] << endl; //prints c

    return 0;
};

//g++ code2.cpp -o code.exe -std=c++14
//./code.exe