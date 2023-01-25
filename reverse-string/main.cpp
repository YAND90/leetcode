#include <vector>
#include <iostream>

void reverseString(std::vector<char> &s)
{
    int n = s.size();
    for (int i = 0; i < n / 2; ++i)
    {
        char c = s[i];
        s[i] = s[n - 1 - i];
        s[n - 1 - i] = c;
    }
};

int main()
{
    //input
    std::vector<char> input {'h', 'e', 'l', 'l', 'o'};

    //output
    std::vector<char> output {'o', 'l', 'l', 'e', 'h'};

    reverseString(input);

    if (input.size() != output.size()) {
        return -1;
    }

    for (int i = 0; i < output.size(); ++i) {
        if (input[i] != output[i]) {
            return -1;
        }
    }

    std::cout << "SUCCESS";
    return 0;
}