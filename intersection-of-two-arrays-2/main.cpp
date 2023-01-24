#include <vector>
#include <iostream>

std::vector<int> intersect(std::vector<int> &nums1, std::vector<int> &nums2)
{
    std::sort(nums1.begin(), nums1.end());
    std::sort(nums2.begin(), nums2.end());

    int len1 = nums1.size();
    int len2 = nums2.size();
    int i, j = 0;

    std::vector<int> res;

    while (i < len1 && j < len2)
    {
        if (nums1[i] < nums2[j])
        {
            ++i;
        }
        else if (nums1[i] > nums2[j])
        {
            ++j;
        }
        else
        {
            res.push_back(nums1[i]);
            ++i;
            ++j;
        }
    }

    return res;
}

int main()
{
    //input
    std::vector<int> input1{1, 2, 2, 1};
    std::vector<int> input2{2, 2};

    //output
    std::vector<int> output{2, 2};

    std::vector<int> res = intersect(input1, input2);

    if (res.size() != output.size()) {
        return -1;
    }

    for (int i = 0; i < output.size(); ++i) {
        if (res[i] != output[i]) {
            return -1;
        }
    }

    std::cout << "SUCCESS";
    return 0;
}