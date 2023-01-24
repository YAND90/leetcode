#include <vector>
#include <iostream>

int maxProfit(std::vector<int> &prices)
{
    int i = 0;
    int len = prices.size();

    int min = 0;
    int max = 0;
    int profit = 0;

    while (i < len)
    {
        while ((i < len - 1) && (prices[i + 1] < prices[i]))
        {
            ++i;
        }

        min = prices[i];

        while ((i < len - 1) && (prices[i + 1] > prices[i]))
        {
            ++i;
        }

        max = prices[i];

        if (max > min)
        {
            profit += max - min;
        }
        ++i;
    }

    return profit;
};

int main()
{
    //input
    std::vector<int> input{7, 1, 5, 3, 6, 4};

    //output
    int output = 7;

    int res = maxProfit(input);

    if (res == output) {
        std::cout << "SUCCESS";
        return 0;
    }

    return -1;
}