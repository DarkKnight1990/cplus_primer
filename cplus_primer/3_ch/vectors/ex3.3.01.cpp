#include <iostream>
#include <vector>

int main() {
    std::vector<int> ivec;
    std::vector<int> ivec2(ivec);
    std::vector<int> ivec3 = ivec;
    // std::vector<std::string> svec(ivec2); error svec holds strings not ints

    std::vector<std::string> articles = {"a", "an", "the"};
    std::vector<std::string> svec(10, "hi");

    std::vector<std::string> svec1(10, "2");

    return EXIT_SUCCESS;
}
