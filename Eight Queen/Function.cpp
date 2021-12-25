#include "Header.h"

void ex(int* board)
{
	board[1]++;
	for (int line = 1; line < 8; line++)
	{
		if (board[line] == 9)
		{
			board[line] = 1;
			board[line + 1]++;
		}
	}
}
bool check(int* board)
{
	for (int i = 1; i < 8; i++)
	{
		for (int j = i + 1; j <= 8; j++)
		{
			if (board[i] == board[j] 
			||abs(board[i] - board[j]) == abs(i - j))
				return false;
		}
	}
	return true;

}
void output(int* board)
{
	for (int line = 1; line <= 8; line++)
	{
		std::cout << board[line] << " ";
	}
	std::cout << std::endl;
}