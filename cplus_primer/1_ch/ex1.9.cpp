#include <iostream>
int main()
{
    std::cout << "Getting the sum of numbers starting from 50 to 100"
        << std::endl;
    int start = 50, sum = 0;
    while(start <= 100)
    {
        sum += start;
        ++start;
    }
    std::cout << "The sum of numbers from 50 to 100 is "
        << sum << std::endl;
}

