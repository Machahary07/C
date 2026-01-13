#include <iostream>
using namespace std;

class Solution {
public:
    int sumOfTwo (int a, int b) {
        return a + b;
    }
};

int main() {
    Solution sol;
    cout << "Enter two integers: ";
    int a, b;
    cin >> a >> b;
    int result = sol.sumOfTwo(a, b);
    cout << "The sum is: " << result << endl;
    return 0;
}

//g++ sumo2.cpp -o sumo2.exe; ./sumo2.exe