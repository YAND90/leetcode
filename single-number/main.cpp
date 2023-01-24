#include <iostream>
#include <vector>

int singleNumber(std::vector<int>& nums) {
        int c = 0;
        
        for (int i = 0; i < nums.size(); ++i) {
            c = c ^ nums[i];
        }
        
        return c;
    }

int main() {
    //input
    std::vector<int> input {2, 2, 1};

    //output
    int output = 1;

    int res = singleNumber(input);

    if (res == output) {
        std::cout << "SUCCESS";
        return 0;
    }

    return -1;
}