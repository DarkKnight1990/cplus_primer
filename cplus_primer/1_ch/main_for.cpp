#include <iostream>
int main()
{
    int sum = 0;

    // sum of values from 1 to 10 inclusive
    for(int i=1; i<=10; ++i)
        sum += i;

    std::cout << "Sum of values from 1 to 10 inclusive is: "
        << sum << std::endl;
    return 0;
}

