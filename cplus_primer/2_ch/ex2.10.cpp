#include <iostream>
#include <string>

std::string global_string;
int global_int;

int main(){
    int local_int;
    std::string local_string;

    std::cout << "Global String: "
        << global_string << std::endl;
    std::cout << "Global Int: "
        << global_int << std::endl;
    std::cout << "Local String: "
        << local_string << std::endl;
    std::cout<< "Local Int: "
        << local_int << std::endl;
    return 0;
}
