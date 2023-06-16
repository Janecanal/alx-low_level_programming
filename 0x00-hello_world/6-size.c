#include <stdio.h>
/**
* main - A C program that prints the size of various types on the computer it is compiled and run on using printf function
* return: 0
*/
int main(void)
{
printf("Size of char: %zu byte\n", sizeof(char));
printf("Size of int: %zu bytes\n", sizeof(int));
printf("Size of long int: %zu bytes\n", sizeof(long int));
printf("Size of long long int: %zu bytes\n", sizeof(long long int));
printf("Size of float: %zu bytes\n", sizeof(float));
return (0);
}
