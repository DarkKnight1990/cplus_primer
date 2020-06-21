#include <string>
#include <iostream>

int main() {
    std::string input_string;
    std::cout << "Enter a string:" << std::endl;
    getline(std::cin, input_string);

    for(auto &c : input_string){
        c = toupper(c);
    }

    std::cout << input_string << std::endl;

    return EXIT_SUCCESS;
}
