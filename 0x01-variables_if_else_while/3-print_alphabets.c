#include <stdio.h>
/**
* main - print alphabet in lower then upper case
* Return: Always 0
*/

int main(void)
{
char ch;
int i = 1;
while (i < 53)
{
if(i < 27)
{
for(ch = 'a'; ch <= 'z'; ch++)
{
putchar(ch);
}
else
{
for(ch = 'A'; ch <= 'Z'; ch++)
{
putchar(ch);
}
}
}
i++;
}
putchar("\n");
return (0);
}
