#include <iostream>

int main() {
    //int i = -1, &r = 0; // error: cannot bind non-const lvalue reference of type ‘int&’ to an rvalue of type ‘int’
    int i2 = 90;
    int *const p2 = &i2;
    const int i = -1, &r = 0;
    const int *const p3 = &i2;
    const int *p4 = &i2;
    //const int &const r2;

}

