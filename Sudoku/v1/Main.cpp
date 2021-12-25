#include "header.h"

static int x, y;

int main()
{
    //initilization
    memset(a, sizeof(a), 0);
    memset(b, sizeof(b), 0);
    x = 1, y = 1;
    //ex
    while (true)
    {
        a[x][y]++;
        if (a[x][y] > 9)
        {
            a[x][y] = 0;
            x--;
            if (x < 1)
            {
                x = 9;
                y--;
            }
            continue;
        }

        if (check(x, y))
        {
            // system("cls");
            // print();
            x++;
            if (x > 9)
            {
                if (y == 9)
                {
                    print();
                    a[9][9] = 0;
                    x = 8;
                    continue;
                    // return 0;
                }
                x = 1;
                y++;
            }
        }
    }

    return 0;
}