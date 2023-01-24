#include <vector>
#include <iostream>

int getSquareNum(int i, int j)
{
    if (0 <= i && i <= 2)
    {
        if (0 <= j && j <= 2)
        {
            return 0;
        }

        if (3 <= j && j <= 5)
        {
            return 1;
        }

        if (6 <= j && j <= 8)
        {
            return 2;
        }
    }

    if (3 <= i && i <= 5)
    {
        if (0 <= j && j <= 2)
        {
            return 3;
        }

        if (3 <= j && j <= 5)
        {
            return 4;
        }

        if (6 <= j && j <= 8)
        {
            return 5;
        }
    }

    if (6 <= i && i <= 8)
    {
        if (0 <= j && j <= 2)
        {
            return 6;
        }

        if (3 <= j && j <= 5)
        {
            return 7;
        }

        if (6 <= j && j <= 8)
        {
            return 8;
        }
    }

    return -1;
};

bool isValidSudoku(std::vector<std::vector<char>> &board)
{
    std::vector<std::vector<bool>> squares(9, std::vector<bool>(9, false));

    for (int i = 0; i < 9; ++i)
    {
        std::vector<bool> row(9, false);
        std::vector<bool> cell(9, false);

        for (int j = 0; j < 9; ++j)
        {
            // valid row
            if (board[i][j] != '.')
            {
                int c = board[i][j] - '1';
                if (row[c] == false)
                {
                    row[c] = true;
                }
                else
                {
                    return false;
                }
            }

            // valid cell
            if (board[j][i] != '.')
            {
                int c = board[j][i] - '1';
                if (cell[c] == false)
                {
                    cell[c] = true;
                }
                else
                {
                    return false;
                }
            }

            // valid square
            if (board[i][j] != '.')
            {
                int squareNum = getSquareNum(i, j);
                int c = board[i][j] - '1';
                if (squares[squareNum][c] == false)
                {
                    squares[squareNum][c] = true;
                }
                else
                {
                    return false;
                }
            }
        }
    }

    return true;
};

int main()
{
    // input
    std::vector<std::vector<char>> input
    {
        {'5', '3', '.', '.', '7', '.', '.', '.', '.'}, 
        {'6', '.', '.', '1', '9', '5', '.', '.', '.'}, 
        {'.', '9', '8', '.', '.', '.', '.', '6', '.'}, 
        {'8', '.', '.', '.', '6', '.', '.', '.', '3'}, 
        {'4', '.', '.', '8', '.', '3', '.', '.', '1'}, 
        {'7', '.', '.', '.', '2', '.', '.', '.', '6'}, 
        {'.', '6', '.', '.', '.', '.', '2', '8', '.'}, 
        {'.', '.', '.', '4', '1', '9', '.', '.', '5'}, 
        {'.', '.', '.', '.', '8', '.', '.', '7', '9'}
    };

    // output
    bool output = true;

    bool res = isValidSudoku(input);

    if (res == output)
    {
        std::cout << "SUCCESS";
        return 0;
    }

    return -1;
}