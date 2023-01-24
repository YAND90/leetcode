#include <iostream>
#include <vector>

void rotate(std::vector<std::vector<int>> &matrix)
{
    int start = 0;
    int end = matrix.size() - 1;

    while (start < end)
    {
        for (int i = 0; i < end - start; ++i)
        {
            int c = matrix[start][start + i];
            matrix[start][start + i] = matrix[end - i][start];
            matrix[end - i][start] = matrix[end][end - i];
            matrix[end][end - i] = matrix[start + i][end];
            matrix[start + i][end] = c;
        }

        ++start;
        --end;
    }
}

int main()
{
    //input
    std::vector<std::vector<int>> input
    {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    //output
    std::vector<std::vector<int>> output
    {
        {7, 4, 1},
        {8, 5, 2},
        {9, 6, 3}
    };

    rotate(input);

    for (int i = 0; i < output.size(); ++i) {
        for (int j = 0; j < output.size(); ++j) {
            if (input[i][j] != output[i][j]) {
                return -1;
            }
        }
    }

    std::cout << "SUCCESS";
    return 0;
}