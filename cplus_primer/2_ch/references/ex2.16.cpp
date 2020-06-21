#include <iostream>

int main() {
    int i = 0, &r1 = i;
    double d = 0, &r2 = d;

    r2 = 3.14159; // valid value of d is changed
    std::cout << d << std::endl;

    r2 = r1;
    std::cout << "d: " << d << ", i: " << i << std::endl;

    i = r2;
    std::cout << "d: " << d << ", i: " << i << std::endl;

    r1 = d;
    std::cout << "d: " << d << ", i: " << i << std::endl;

    return 0;

}
