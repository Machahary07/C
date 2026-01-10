#include <iostream>
using namespace std;

int main() {
    int marks[5] = {85, 90, 78, 92, 88};
    cout << "Marks of the students are:" << endl;
    for(int i = 0; i < 5; i++) {
        cout << "Student " << (i + 1) << ": " << marks[i] << endl;
    }
    return 0;
}

//In powershell: g++ array.cpp -o array.exe; .\array.exe
//In cmd: g++ array.cpp -o array.exe & array.exe