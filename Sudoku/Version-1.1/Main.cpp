#include "Board.h"
#include <iostream>
using namespace std;

static Board board;

int main()
{

    //ex
    while (true)
    {
        board.model_A[board.m_line][board.m_column]++;
        if (board.model_A[board.m_line][board.m_column] > 9)
        {
            board.model_A[board.m_line][board.m_column] = 0;
            board.m_column--;
            if (board.m_column < 1)
            {
                board.m_column = 9;
                board.m_line--;
            }
            continue;
        }

        if (board.check())
        {
            // system("cls");
            // print();
            board.m_column++;
            if (board.m_column > 9)
            {
                if (board.m_line == 9)
                {
                    board.print();
                    board.model_A[9][9] = 0;
                    board.m_column = 8;
                    continue;
                    // return 0;
                }
                board.m_column = 1;
                board.m_line++;
            }
        }
    }

    return 0;
}