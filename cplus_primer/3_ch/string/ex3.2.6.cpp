#include <string>
#include <iostream>

int main() {
    std::string input_string;
    std::cout << "Enter a string: " << std::endl;
    getline(std::cin, input_string);
    
    auto len = input_string.size();

    std::cout << "length of entered string is: " 
              << len << std::endl;
    
    return EXIT_SUCCESS;
}