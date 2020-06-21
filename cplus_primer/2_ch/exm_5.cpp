#include <iostream>
int main() {
    long double ld = 3.1415926536;
    // narrowing conversion of ‘ld’ from ‘long double’ to ‘int’ inside { } [-Wnarrowing]
    // int a{ld}, b = {ld}; -- this initialization is not allowed
    int c(ld), d = ld; // allowed but values are truncated
    std::cout << c << std::endl;
    std::cout << d << std::endl;
    return 0;
}
