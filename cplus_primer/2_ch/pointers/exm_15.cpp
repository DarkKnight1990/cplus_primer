#include <iostream>

int main() {
    int ival = 42;
    int *pi = &ival;
    int **ppi = &pi;

    std::cout << pi << std::endl;
    std::cout << ppi << std::endl;
    std::cout << *ppi << std::endl;
    std::cout << **ppi << std::endl;

    return 0;
}
