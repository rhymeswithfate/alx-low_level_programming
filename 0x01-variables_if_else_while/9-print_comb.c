#include <stdio.h>
/**
* main - I get it, again
* Return: Always 0
*/
int main(void)
{
int num;
for (num = '0'; num <= '9'; num++)
{
putchar(num);
putchar(',');
putchar(' ');
}
putchar('\n');
return (0);
}
