#include "Class.h"

bool board::check()
{
    // int line, column, box, block;
    for (short column = 1; column <= 9; column++)
    {
        if (model_a[m_line][column] == model_a[m_line][m_column] && column != m_column)
            return false;
    }

    for (short line = 1; line <= 9; line++)
    {
        if (model_a[line][m_column] == model_a[m_line][m_column] && line != m_line)
            return false;
    }

    short box;
    box = (m_column + 2) / 3;
    box += (m_line - 1) / 3 * 3;

    short block;
    block = (m_column + 2) % 3 + 1;
    block += (m_line - 1) % 3 * 3;

    model_b[box][block] = model_a[m_line][m_column];
    for (short i = 1; i <= 9; i++)
    {
        if (model_b[box][i] == model_b[box][block] && i != block)
            return false;
    }

    return true;
}

void board::print()
{
    for (short m_line = 1; m_line <= 9; m_line++)
    {
        for (short m_column = 1; m_column <= 9; m_column++)
        {
            cout << model_a[m_line][m_column] << " ";
        }
        cout << endl;
    }
    cout << endl
         << endl;
}

board::board()
    : m_column(1), m_line(1)
{
   
    memset(model_a, 0, sizeof(model_a));
    memset(model_b, 0, sizeof(model_b));
}