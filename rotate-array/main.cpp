#include <iostream>
#include <vector>

void reverse(std::vector<int> &a, int start, int end)
{
    int c = 0;
    while (start < end)
    {
        c = a[start];
        a[start] = a[end];
        a[end] = c;
        ++start;
        --end;
    }
}
void rotate(std::vector<int> &nums, int k)
{
    int len = nums.size();
    k = k % len;

    reverse(nums, 0, len - 1);
    reverse(nums, 0, k - 1);
    reverse(nums, k, len - 1);
}

int main()
{
    //input
    std::vector<int> input { 1, 2, 3, 4, 5, 6, 7 };
    int k = 3;

    //output
    std::vector<int> output { 5, 6, 7, 1, 2, 3, 4 };

    rotate(input, k);

    for (int i = 0; i < output.size(); ++i) {
        if (input[i] != output[i]) {
            return -1;
        }
    }

    std::cout << "SUCCESS";
    return 0;
}