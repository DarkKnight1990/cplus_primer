#include <iostream>
int main()
{
    int sum = 0;
    for(int i = -100; i <= 101; ++i)
        sum += i;
    std::cout << "The sum is "
        << sum << std::endl;
    return 0;
}

