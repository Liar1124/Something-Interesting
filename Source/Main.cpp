#include "Class.h"

class board Board;

int main()
{
    //initialization
    //ex
    while (true)
    {
        Board.model_a[Board.m_line][Board.m_column]++;
        if (Board.model_a[Board.m_line][Board.m_column] > 9)
        {
            Board.model_a[Board.m_line][Board.m_column] = 0;
            Board.m_column--;
            if (Board.m_column < 1)
            {
                Board.m_column = 9;
                Board.m_line--;
            }
            continue;
        }

        if (Board.check())
        {
            // system("cls");
            // print();
            Board.m_column++;
            if (Board.m_column > 9)
            {
                if (Board.m_line == 9)
                {
                    Board.print();
                    continue;
                    // return 0;
                }
                Board.m_column = 1;
                Board.m_line++;
            }
        }
    }

    return 0;
}