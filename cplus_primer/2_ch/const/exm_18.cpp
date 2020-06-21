#include <iostream>

int main() {
    int i = 42;
    const int &ri = i;

    std::cout << ri << " " << &ri << std::endl;

    const int &ri2 = 42;

    std::cout << ri2 << " " << &ri2 << std::endl;

    const int &ri3 = ri * 2;
    std::cout << ri3 << " " << &ri3 << std::endl;

    //int &r = ri *2; // Error cannot reference non constant reference
    return 0;
}

