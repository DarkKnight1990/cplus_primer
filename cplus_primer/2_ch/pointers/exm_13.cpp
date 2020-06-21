#include <iostream>

int main() {
    int ival = 1024;
    int *pi = nullptr; // null pointer
    int *pi2 = &ival;

    if (pi)
        std::cout << "Value of pi: " << pi << std::endl;
    if (pi2)
        std::cout << "Value of pi2: " << pi2 << std::endl;

    return 0;
}
