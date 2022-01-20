// #include "Board.h"
// #include <iostream>
// #include <string.h>

// bool Board::check()
// {
//     //check m_column
//     for (int i = 1; i < m_column; i++)
//     {
//         if (model_A[m_line][i] == model_A[m_line][m_column])
//             return false;
//     }

//     //check m_line
//     for (int i = 1; i < m_line; i++)
//     {
//         if (model_A[i][m_column] == model_A[m_line][m_column])
//             return false;
//     }

//     //check box
//     for (int i = 1; i < m_block; i++)
//     {
//         if (model_B[i] == model_A[m_line][m_column])
//             return false;
//     }

//     // short box;
//     // box = (m_column + 2) / 3;
//     // box += (m_line - 1) / 3 * 3;

//     short block;
//     block = (m_column + 2) % 3 + 1;
//     block += (m_line - 1) % 3 * 3;

//     model_B[block] = model_A[m_column][m_line];
//     return true;
// }

// void Board::print()
// {
//     for (int line = 1; line <= 9; line++)
//     {
//         for (int column = 1; column <= 9; column++)
//         {
//             std::cout << model_A[line][column] << " ";
//         }
//         std::cout << std::endl;
//     }
//     std::cout << std::endl;
//     return;
// }

// Board::Board()
// {
//     m_column = m_line = m_block = 0;
//     memset(model_A, 0, sizeof(model_A));
//     memset(model_B, 0, sizeof(model_B));
// }
