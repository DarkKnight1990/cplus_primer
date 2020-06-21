#include <iostream>
int main()
{
    int sum = 0, iter = 1;
    // keep iterating the loop as long as iter is less than or equal to 10
    while(iter<=10)
    {
        sum += iter;
        ++iter;
    }
    std::cout << "Sum of 1 to 10 inclusive is "
        << sum << std::endl;
}

