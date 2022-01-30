#pragma once

#include <iostream>
#include <cstring>

using namespace std;

class board
{
public:
    //variable
    short model_a[10][10]; //[line][Column]
    short model_b[10][10]; //[box][block]
    short m_column, m_line;

    //function
    board();

    bool check();

    void print();
};