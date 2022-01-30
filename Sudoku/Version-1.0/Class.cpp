#include "Class.h"

bool board::check(short &x, short &y)
{
    // int line, column, box, block;
    for (short column = 1; column <= 9; column++)
    {
        if (model_a[column][y] == model_a[x][y] && column != x)
            return false;
    }

    for (short line = 1; line <= 9; line++)
    {
        if (model_a[x][line] == model_a[x][y] && line != y)
            return false;
    }

    short box;
    box = (x + 2) / 3;
    box += (y - 1) / 3 * 3;

    short block;
    block = (x + 2) % 3 + 1;
    block += (y - 1) % 3 * 3;

    model_b[box][block] = model_a[x][y];
    for (short i = 1; i <= 9; i++)
    {
        if (model_b[box][i] == model_b[box][block] && i != block)
            return false;
    }

    return true;
}

void board::print()
{
    for (short y = 1; y <= 9; y++)
    {
        for (short x = 1; x <= 9; x++)
        {
            cout << model_a[x][y] << " ";
        }
        cout << endl;
    }
    cout << endl
         << endl;
}

board::board()
{
    memset(model_a, 0, sizeof(model_a));
    memset(model_b, 0, sizeof(model_b));
}