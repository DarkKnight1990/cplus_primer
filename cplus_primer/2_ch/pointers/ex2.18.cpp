#include <iostream>
int main() {
    int ival = 20;
    int *ivalPtr; //Uninitialised pointer

    std::cout << "ival: " << ival << std::endl;
    std::cout << ivalPtr << std::endl;

    // changing the value of the pointer
    ivalPtr = &ival;
    std::cout << ivalPtr << std::endl;

    // changing the value of ival using pointer
    *ivalPtr = 40;
    std::cout << ivalPtr << std::endl;
    std::cout << "ival: " << ival << std::endl;

    return 0;

}
