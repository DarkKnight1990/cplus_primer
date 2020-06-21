#include <iostream>

int main() {
    int ival = 42;
    int *p;
    int *&r = p; // a reference to pointer p
    r = &ival; // This makes pointer i to point at i

    std::cout << r << " has value " << *r << std::endl;
    std::cout << ival << " ival at location " << &ival << std::endl;

    *r = 24;

    std::cout << r << " has value " << *r << std::endl;
    std::cout << ival << " ival changed at location " << &ival << std::endl;
    return 0;
}
