#include <iostream>
int main() {
    int ival = 1.01; // valid but truncated
    std::cout << ival << std::endl;

    //int &rval = 1.01; // error: reference initializers should be an object

    int &rval2 = ival; // Valid references the ival object
    std::cout << &rval2 << " is a reference to the variable ival "
        << ival << std::endl;

    //int &rval3; // error: references should be initialized
    return 0;
}
