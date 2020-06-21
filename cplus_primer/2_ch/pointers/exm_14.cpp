#include <iostream>

int main() {
    double obj = 3.14, *pd = &obj;
    void *pv = &obj;
    std::cout << pv << std::endl;
    std::cout << pd << std::endl;
    return 0;
}
