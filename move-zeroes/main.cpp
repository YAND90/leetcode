#include <iostream>
#include <vector>

void moveZeroes(std::vector<int> &nums)
{
    int k = 0;

    for (int i = 0; i < nums.size(); ++i)
    {
        if (nums[i] == 0)
        {
            continue;
        }
        else
        {
            nums[k] = nums[i];
            ++k;
        }
    }

    while (k < nums.size())
    {
        nums[k] = 0;
        ++k;
    }
}

int main()
{
    //input
    std::vector<int> input{0, 1, 0, 3, 12};
    //output
    std::vector<int> output{1, 3, 12, 0, 0, 0};

    moveZeroes(input);

    for (int i = 0; i < output.size(); ++i) {
        if (input[i] != output[i]) {
            return -1;
        }
    }

    std::cout << "SUCCESS";
    return 0;
}