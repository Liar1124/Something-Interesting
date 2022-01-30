#include <iostream>
#include <cstring>

using namespace std;

class board
{
public:
    //variable
    short model_a[10][10]; //[line][Column]
    short model_b[10][10]; //[box][block]
    short x = 1, y = 1;

    //function
    board();

    bool check(short &x, short &y);

    void print();
};