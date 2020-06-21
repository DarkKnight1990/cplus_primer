#include <string>
#include <iostream>

int main() {
    std::string input_string;
    std::cout << "Enter a string:" << std::endl;
    getline(std::cin, input_string);
    decltype(input_string.size()) punc_cnt = 0;

    for(auto c : input_string){
        if (ispunct(c)){
            ++punc_cnt;
        }
    }

    std::cout << punc_cnt
              << " puncuation characters in "
              << input_string << std::endl;
    
    return EXIT_SUCCESS;
}
