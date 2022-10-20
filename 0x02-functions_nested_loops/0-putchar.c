#include <stdio.h>
#include <unistd.h>
#include "main.h"

/**
* main - Use _putchar
* Return: Always 0
*/

int main(void)
{
char str[7] = "_putchar";
int i;

for(i = 0; i < 7; i++)
_putchar(str[i]);
_putchar('\n');
return (0);
}
