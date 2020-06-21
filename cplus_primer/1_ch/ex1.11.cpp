#include <iostream>
int main()
{
    int v1 = 0, v2 = 0;
    std::cout << "Enter a number: " << std::endl;
    std::cin >> v1;
    std::cout << "Enter a number greater than the previous: " << std::endl;
    std::cin >> v2;

    while(v1 <= v2)
    {
        std::cout << v1 << " ";
        ++v1;
    }
    std::cout << std::endl;
    return 0;
}

