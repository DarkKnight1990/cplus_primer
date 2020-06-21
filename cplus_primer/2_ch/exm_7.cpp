#include <iostream>

// The program shows the scope of a variable

int reused = 42; // global scope for variable

int main() {
    int unique = 0; // var unique has a block scope

    // global value of reused is printed before
    std::cout << reused << " " << unique << std::endl;

    // new local value defined for var reused
    int reused = 21;
    std::cout << reused << " " << unique << std::endl;

    // here we can explicitly use global reused variable
    std::cout << ::reused << " " << unique << std::endl;
    return 0;
}

