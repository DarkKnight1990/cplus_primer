#include <iostream>
extern const int buff_size;

int main(){
    std::cout << "Const value from support file : " << buff_size
        << std::endl;
    //buff_size = 100; // Error assignment on read only variable
    //std::cout << "After changing buff_size: " << buff_size
    //    << std::endl;
    return 0;
}

