#include <string>
#include <iostream>

int main(){
    std::string line;
    while (getline(std::cin, line))
    {
        std::cout << line << std::endl;
    }
    
    return EXIT_SUCCESS;
}
