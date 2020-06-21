#include <iostream>
int main() {
    int i = 42;
    int *pi = &i;
    *pi = *pi * *pi;
    std::cout << i << std::endl;
    return 0;
}
