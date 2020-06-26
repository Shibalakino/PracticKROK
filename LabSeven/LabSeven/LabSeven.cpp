#include <iostream>
#include <math.h>


int simple(int num)
{
    if (num <= 1)
    {
        return false;
    }
    else
    {
        for (int i = 2; i <= sqrt(num); i++)
        {
            if (num % i == 0)
            {
                return false;
            }
        }

        return true;
    }
}

int main()
{
    int n;

    std::cout << "n=";
    std::cin >> n;

    for (int i = 0; i < n - 1; i++)
    {
        if (simple(i) && simple(i + 2))
        {
            std::cout << i << " and " << i + 2 << std::endl;
        }
       
    }

    return 0;
}