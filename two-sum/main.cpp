#include <iostream>
#include <vector>
#include <unordered_map>

std::vector<int> twoSum(std::vector<int> &nums, int target)
{
    std::unordered_map<int, int> dups;
    std::vector<int> res;

    for (int i = 0; i < nums.size(); ++i)
    {
        int c = target - nums[i];

        auto it = dups.find(c);

        if (it != dups.end())
        {
            res.push_back(it->second);
            res.push_back(i);
        }
        else
        {
            dups[nums[i]] = i;
        }
    }

    return res;
}

int main()
{
    //input
    std::vector<int> input {2, 7, 11, 15};
    int target = 9;
    //output
    std::vector<int> output {0, 1};

    std::vector<int> res = twoSum(input, target);

    if (res.size() != output.size()) {
        return -1;
    }

    for (int i = 0; i > output.size(); ++i) {
        if (res[i] != output[i]) {
            return -1;
        }
    }

    std::cout << "SUCCESS";
    return 0;
}