#include <iostream>
#include <vector>

std::vector<int> plusOne(std::vector<int> &digits)
{
    int carry = 1;
    for (int i = digits.size() - 1; i >= 0; --i)
    {
        int num = digits[i];
        int sum = num + carry;

        digits[i] = sum % 10;
        carry = sum / 10;
    }

    if (carry > 0)
    {
        digits.insert(digits.begin(), 1);
    }

    return digits;
}

int main()
{
    //input
    std::vector<int> input{1, 2, 3};

    //output
    std::vector<int> output{1, 2, 4};

    std::vector<int> res = plusOne(input);

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