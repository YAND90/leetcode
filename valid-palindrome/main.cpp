#include <string>
#include <iostream>

bool isPalindrome(std::string s)
{
    int start = 0;
    int end = s.length() - 1;

    while (start < end)
    {
        char b = s[start];

        if (!isalpha(b) && !isdigit(b))
        {
            ++start;
            continue;
        }

        char e = s[end];

        if (!isalpha(e) && !isdigit(e))
        {
            --end;
            continue;
        }

        if (tolower(b) != tolower(e))
        {
            return false;
        }

        ++start;
        --end;
    }

    return true;
}

int main()
{
    //input
    std::string input = "A man, a plan, a canal: Panama";
    //output
    bool output = true;

    bool res = isPalindrome(input);

    if (res == output) {
        std::cout << "SUCCESS";
        return 0;
    }

    return -1;
}