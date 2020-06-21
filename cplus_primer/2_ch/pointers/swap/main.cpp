#include <iostream>
using namespace std;

extern void swap(int &x, int &y);

int main() {
    int a = 100;
    int b = 200;

    cout << "a before swap: " << a << endl;
    cout << "b before swap: " << b << endl;

    swap(a, b);

    cout << "a after swap: " << a << endl;
    cout << "b after swap: " << b << endl;

    return 0;
}


//https://www.ntu.edu.sg/home/ehchua/programming/cpp/cp4_PointerReference.html