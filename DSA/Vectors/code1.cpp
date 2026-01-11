#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> vec; //0 capacity
    cout << vec[0]; //undefined behavior cuz vec is empty
    return 0;
};