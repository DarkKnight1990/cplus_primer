#include <string>
#include <iostream>

int main() {
    std::string input_string;
    std::cout << "Enter a string:" << std::endl;
    getline(std::cin, input_string);

    for(decltype(input_string.size()) index = 0;
                 index!=input_string.size() && !isspace(input_string[index]);
                 ++index){
                     input_string[index] = toupper(input_string[index]);
                 }
    std::cout << input_string << std::endl;
    
    return EXIT_SUCCESS;
}
