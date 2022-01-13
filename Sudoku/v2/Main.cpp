#include "Board.h"
#include <iostream>
using namespace std;


int main()
{
	class board Board;



	while (*Board.first <= 9)
	{
		//ex
		(*Board.flo)++;
		if (*Board.flo > 9)
		{
			*Board.flo = 0;
			Board.flo -= 1;
			continue;
		}

		if (Board.check())
		{
			Board.print();
			if (Board.flo != Board.last)
				Board.flo += 1;
			else
				Board.print();
		}
	}


	return 0;
}