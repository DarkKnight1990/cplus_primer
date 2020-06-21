#include <iostream>
int main(){
    bool b = 42;
    std::cout << "Value of bool b: " << b << std::endl;
    int i = b;
    std::cout << "Value of int i: " << i << std::endl;
    i = 3.14;
    std::cout << "Value of i after assigning value 3.14: " << i << std::endl;
    double pi = i;
    std::cout << "Value of pi: " << pi << std::endl;
    unsigned char c = -1;
    std::cout << "Value of unsigned char c: " << c << std::endl;
    signed char c2 = 256;
    std::cout << "Value of signed char c2: " << c2 << std::endl;
    return 0;
}

