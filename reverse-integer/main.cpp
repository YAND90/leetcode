#include <iostream>

int reverse(int x)
{
    int res = 0;
    while (x != 0)
    {
        if ((res > INT_MAX / 10))
        {
            return 0;
        }

        if ((res < INT_MIN / 10))
        {
            return 0;
        }
        res = res * 10 + x % 10;
        x = x / 10;
    }

    return res;
}

int main()
{
    // input
    int input = 123;

    // output
    int output = 321;


    int res = reverse(input);

    if (res == output) {
        std::cout << "SUCCESS";
        return 0;
    }

    return -1;
}