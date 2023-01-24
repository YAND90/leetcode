#include <iostream>
#include <vector>
#include <unordered_set>

bool containsDuplicate(std::vector<int> &nums)
{
    std::unordered_set<int> dups;
    int len = nums.size();

    for (int i = 0; i < len; ++i)
    {
        auto it = dups.find(nums[i]);

        if (it == dups.end())
        {
            dups.insert(nums[i]);
        }
        else
        {
            return true;
        }
    }

    return false;
}

int main()
{
    //input
    std::vector<int> input {1, 2, 3, 1};

    //output
    bool output = true;

    bool res = containsDuplicate(input);

    if (output == res) {
        std::cout << "SUCCESS";
        return 0;
    }

    return -1;
}