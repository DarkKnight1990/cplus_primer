#include <string>
#include <iostream>

int main() {
    std::string line;
    while(getline(std::cin, line)){
        if(line.size() > 80){
            std::cout << line << std::endl;
        }
    }

    return EXIT_SUCCESS;
}
