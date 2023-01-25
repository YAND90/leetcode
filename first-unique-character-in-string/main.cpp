#include <string>
#include <unordered_map>
#include <iostream>

int firstUniqChar(std::string s)
{
    std::unordered_map<char, int> dups;

    for (int i = 0; i < s.length(); ++i)
    {
        dups[s[i]]++;
    }

    for (int i = 0; i < s.length(); ++i)
    {
        if (dups[s[i]] == 1)
        {
            return i;
        }
    }

    return -1;
}

int main()
{
    //input
    std::string input = "leetcode";
    //output
    int output = 0;

    int res = firstUniqChar(input);

    if (res == output) {
        std::cout << "SUCCESS";
        return 0;
    }

    return -1;
}