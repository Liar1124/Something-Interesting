#include "Board.h"
#include <string.h>
#include <stdio.h>
#include <iostream>

board::board()
{
	memset(model_a, 0, sizeof(model_a));
	memset(model_b, 0, sizeof(model_b));

	flo = &model_a[0][0];
	first = &model_a[0][0];
	last = &model_a[8][8];
}

void board::print()
{
	for (int y = 0; y < 9; y++)
	{
		for (int x = 0; x < 9; x++)
		{
			printf("%d ", model_a[y][x]);
		}
		printf("\n");
	}
	system("pause");
	system("cls");
}

bool board::check()
{
	column = (flo - first) % 9 ;
	line = int(flo - first) / 9;
	block = (column + 3) % 3 + 1;
	block += line % 3 * 3;

	//check box;
	for (short i = 1; i < block; i++)
		if (model_a[line][column] == model_b[i])
			return false;

	//check line
	for (short i = 0; i < column; i++)
		if (model_a[line][column] == model_a[line][i])
			return false;

	//check column
	for (short i = 0; i < line; i++)
		if (model_a[line][column] == model_a[i][column])
			return false;

	//pass the check
	model_b[block] = model_a[line][column];
	return true;
}