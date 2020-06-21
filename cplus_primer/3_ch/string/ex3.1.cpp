#include <string>
#include <iostream>

int main() {
    std::string s1;
    std::string s2 = s1;
    std::string s3 = "hiya";
    std::string s4(10, 'c');

    std::cout << s1 << std::endl;
    std::cout << s2 << std::endl;
    s2 = "new";
    std::cout << s1 << std::endl;
    std::cout << s2 << std::endl;
    std::cout << s3 << std::endl;
    std::cout << s4 << std::endl;

    return EXIT_SUCCESS;
}