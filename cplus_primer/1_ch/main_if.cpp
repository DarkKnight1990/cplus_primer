#include <iostream>

int main()
{
    // currVal is the number we are counting; we read new values to val
    int currVal = 0, val = 0;
    
    // read first number and ensure that we have data to process
    if(std::cin >> currVal)
    {
        int cnt = 1;
        while(std::cin >> val)
        {
            if (val == currVal)
                ++cnt;
            else
            {
                std::cout << currVal << " occurs "
                    << cnt << " times " << std::endl;
                currVal = val;
                cnt = 1;
            }
        }
        std::cout << currVal << " occurs "
            << cnt << " times " << std::endl;
    }
}

