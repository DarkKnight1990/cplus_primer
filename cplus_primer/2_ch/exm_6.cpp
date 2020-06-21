#include <iostream>
extern double pi;
int main(){
    extern int i;
    int j;

    // i = 0;

    // std::cout << i << std::endl;
    std::cout << j << std::endl;

    // extern double pi = 3.14;
    std::cout << pi << std::endl;
    return 0;
}
