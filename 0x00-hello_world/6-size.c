#include <stdio.h>
/**
* find size of characters
*/

int main(void)
{
int intsize;
long int longintsize;  
long long int longlongintsize;
char charsize;
float floatsize;
printf("Size of a char: %lu byte(s)\n", sizeof(charsize));
printf("Size of an int: %lu byte(s)\n", sizeof(intsize));
printf("Size of a long int: %lu byte(s)\n", sizeof(longintsize));
printf("Size of a long long int: %lu byte(s)\n", sizeof(longlongintsize));
printf("Size of a float: %lu byte(s)\n", sizeof(floatsize));
return (0);
}
