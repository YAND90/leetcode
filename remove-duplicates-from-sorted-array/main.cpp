#include <vector>
#include <iostream>

int removeDuplicates(std::vector<int> &nums)
{
    int j = 1;

    for (int i = 0; i < nums.size() - 1; ++i)
    {
        if (nums[i] == nums[i + 1])
        {
            continue;
        }
        else
        {
            nums[j] = nums[i + 1];
            ++j;
        }
    }

    return j;
};

int main()
{
    // input
    std::vector<int> input {1, 1, 2};

    // expected output
    std::vector<int> output{1, 2};

    int len = removeDuplicates(input);

    if (len != output.size())
    {
        return -1;
    }

    for (int i = 0; i < len; ++i)
    {
        if (output[i] != input[i])
        {
            return -1;
        }
    }

    std::cout << "SUCCESS";
    return 0;
}