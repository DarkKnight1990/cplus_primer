#include <iostream>

int main() {
    int var = 42;
    int foo = 20;
    int &refFoo = foo;
    int *ptr;
    ptr = &var;

    std::cout << "ptr: " << ptr << std::endl;
    std::cout << "*ptr: " << *ptr << std::endl;

    int &ptrRef = *ptr;
    std::cout << "ptrRef: " << ptrRef << std::endl;
    std::cout << "&ptrRef: " << &ptrRef << std::endl;

    std::cout << "var before re-assignment: " << var << std::endl;
    ptrRef = foo;
    std::cout << "var after re-assignment: " << var << std::endl;
    std::cout << "ptr: " << ptr << std::endl;
    std::cout << "*ptr: " << *ptr << std::endl;
    std::cout << "ptrRef: " << ptrRef << std::endl;
    std::cout << "&ptrRef: " << &ptrRef << std::endl;
    std::cout << "&refFoo: " << &refFoo << std::endl;
    return 0;
}
