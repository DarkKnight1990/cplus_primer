#include <iostream>

int main() {
    int i = 42;
    int &r = i;
    int *p;
    p = &i;
    std::cout << *p << std::endl;
    std::cout << p << std::endl;
    std::cout << &r << " " << &i << std::endl;
    return 0;
}
