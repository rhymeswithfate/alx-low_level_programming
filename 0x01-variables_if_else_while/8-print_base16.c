#include <stdio.h>
/**
* main - I get it, again
* Return: Always 0
*/
int main(void)
{
int num;
char ch;
for (num = '0'; num <= '9'; num++)
putchar(num);
for (ch = 'a'; ch < 'g'; ch++)
putchar(ch);
putchar('\n');
return (0);
}
