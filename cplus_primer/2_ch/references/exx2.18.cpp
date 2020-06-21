#include <iostream>

int main() {
    int i = 0, &ri = i;
    i = 5, ri = 8;
    int &ri2 = ri;
    ri2 = 20;
    std::cout << i << " " << ri << " " << ri2 << std::endl;
    return 0;
}
