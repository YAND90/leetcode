#include <string>
#include <iostream>
#include <unordered_map>

bool isAnagram(std::string s, std::string t)
{
    std::unordered_map<char, int> dups;

    if (s.length() != t.length())
    {
        return false;
    }

    for (int i = 0; i < s.length(); ++i)
    {
        dups[s[i]]++;
        dups[t[i]]--;
    }

    for (std::unordered_map<char, int>::const_iterator it = dups.begin(); it != dups.end(); ++it)
    {
        if (it->second != 0)
        {
            return false;
        }
    }

    return true;
}

int main()
{
    //input
    std::string input1 = "anagram";
    std::string input2 = "nagaram";

    //output
    bool output = true;

    bool res = isAnagram(input1, input2);

    if (res == output) {
        std::cout << "SUCCESS";
        return 0;
    }

    return -1;
}