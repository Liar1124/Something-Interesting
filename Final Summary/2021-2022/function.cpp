#include "Header.h"

void input(const char* message)
{
	for (int i = 0; i < strlen(message); i++)
	{
		std::cout << message[i];
		Sleep(60);
	}
	std::cout << std::endl;
}
void color()
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY |
		FOREGROUND_RED | FOREGROUND_BLUE);
}
