#include <iostream>
int main()
{
    int sum = 0;
    for(int i = 50; i <= 100; ++i)
        sum += i;
    std::cout << "The sum of numbers starting from 50 through 100 included is: "
        << sum << std::endl;
    return 0;
}

