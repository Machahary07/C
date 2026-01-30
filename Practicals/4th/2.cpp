//WAP of object oriented programming in cpp to input a number and print the reverse of that number.

#include <iostream>
using namespace std;

class reverse {
    int num, rev, store;
public:
    void input() {
        cout << "Enter a number: ";
        cin >> num;
    }

    void compute() {
        rev = 0;
        store = num;
        while (store != 0) {
            rev = rev * 10 + store % 10;
            store = store / 10;
        }
    }

    void display() {
        cout << "Reverse of " << num << " is " << rev << endl;
    }
};

int main() {
    reverse r;
    r.input();
    r.compute();
    r.display();
    return 0;
};