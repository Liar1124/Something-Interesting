#include "header.h"

bool check(int &x, int &y)
{
    // int line, column, box, block;
    for (short column = 1; column <= 9; column++)
    {
        if (a[column][y] == a[x][y] && column != x)
            return false;
    }

    for (short line = 1; line <= 9; line++)
    {
        if (a[x][line] == a[x][y] && line != y)
            return false;
    }

    short box;
    box = (x + 2) / 3;
    box += (y - 1) / 3 * 3;

    short block;
    block = (x + 2) % 3 + 1;
    block += (y - 1) % 3 * 3;

    b[box][block] = a[x][y];
    for (short i = 1; i <= 9; i++)
    {
        if (b[box][i] == b[box][block] && i != block)
            return false;
    }

    return true;
}

void print()
{
    for (int y = 1; y <= 9; y++)
    {
        for (int x = 1; x <= 9; x++)
        {
            cout << a[x][y] << " ";
        }
        cout << endl;
    }
    cout << endl
         << endl;
    return;
}