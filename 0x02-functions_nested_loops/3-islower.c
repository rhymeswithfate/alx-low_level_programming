#include "main.h"

/**
* _islower - Check main
* @c: An input character
* Return: 1 if lowercase, 0 otherwise
*/

int _islower(int c)
{
char ch;
int check = 0;
for (ch = 'a'; ch <= 'z' ; ch++)
{
if (ch == c)
check = 1;
}
return (check);
}
