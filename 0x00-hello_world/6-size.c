#include <stdio.h>
/**
 *main - a program that prints sizes of all types
 *Return= 0 (Success)
 */
int main(void)
{
int num [] = {1, 4, 8};
printf("Size of a char: %d byte(s)", num[0]);
printf("Size of an int: %d byte(s)", num[1]);
printf("Size of a long int: %d byte(s)", num[1]);
printf("Size of a long long int: %d byte(s)", num[2]);
printf("Size of a float: %d byte(s)", num[1]);
return (0);
}
