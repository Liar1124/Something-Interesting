#include <iostream>
#include <string.h>
using namespace std;

//variable
short a[10][10]; //[line][Column]
short b[10][10]; //[box][block]

//function
bool check(int& x, int& y);
void print();