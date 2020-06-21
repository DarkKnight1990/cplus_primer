#include <iostream>
int size;

int set_buff(){
    std::cout << "Enter size: " << std::endl;
    std::cin >> size;
    return size;
}

extern const int buff_size = set_buff();

