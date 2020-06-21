#include <iostream>

int main() {
    double dval;
    double *ptr1 = &dval;
    double *ptr2 = ptr1;

    std::cout << ptr1 << std::endl;
    std::cout << ptr2 << std::endl;

    *ptr2 = 35.89;
    std::cout << *ptr1 << std::endl;
    std::cout << *ptr2 << std::endl;
    std::cout << dval << std::endl;
}

