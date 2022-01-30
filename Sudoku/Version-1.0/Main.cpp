#include "Class.h"

int main()
{
    class board Board;
    //initialization
    //ex
    while (true)
    {
        Board.model_a[Board.x][Board.y]++;
        if (Board.model_a[Board.x][Board.y] > 9)
        {
            Board.model_a[Board.x][Board.y] = 0;
            Board.x--;
            if (Board.x < 1)
            {
                Board.x = 9;
                Board.y--;
            }
            continue;
        }

        if (Board.check(Board.x, Board.y))
        {
            // system("cls");
            // print();
            Board.x++;
            if (Board.x > 9)
            {
                if (Board.y == 9)
                {
                    Board.print();
                    break;
                    // return 0;
                }
                Board.x = 1;
                Board.y++;
            }
        }
    }

    return 0;
}