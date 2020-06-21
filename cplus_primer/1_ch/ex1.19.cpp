#include <iostream>
int main()
{
    int v1 = 0, v2 = 0, start = 0;
    std::cout << "Enter a number: " << std::endl;
    std::cin >> v1;
    std::cout << "Enter a number: " << std::endl;
    while(std::cin >> v2)
    {
        start = v1;
        if(v1 < v2)
        {
            int sum = 0;
            while(v1 <= v2)
            {
                sum += v1;
                ++v1;
            }
            std::cout << "Sum of numbers from "
                << start << " through " << v2
                << " is " << sum << std::endl;
        }
        else
        {
            std::cout << "Enter a number greater than "
                << start << std::endl;
        }
    }
}
