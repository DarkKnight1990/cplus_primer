#include <iostream>
int main() {
    // Below is not allowed
    //std::cin >> int input_value;
    //std::cout << input_value << std::endl;

    int input_value;
    //std::cout << input_value << std::endl; //Initialized to 0
    //std::cin >> input_value;
    std::cout << input_value << std::endl;

    // Below is not allowed
    //int i = {3.14}; // Narrowing conversion is not allowed
    //std::cout << i << std::endl;

    int i = (3.14); // Allowed but value is truncated
    std::cout << i << std::endl;

    // This is not allowed
    // double salary = wage = 9999.99; // Error because wage is not declared in the scope
    // std::cout << salary << std::endl;

    double wage;
    double salary = wage = 9999.99;
    std::cout << salary << " and " << wage
        << std::endl;

    int ni = 3.14;
    std::cout << ni << std::endl;
    return 0;
}
