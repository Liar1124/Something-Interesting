#include "Header.h"

//variable
int board[9];


int main()
{
	//initialization
	for (int line = 0; line < 9; line++)
		board[line] = 1;

	//ex & check
	while (board[8] <= 8)
	{
		ex(board);
		if (check(board))
		{
			output(board);
		}
	}
	system("pause");

	return 0;
}