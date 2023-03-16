#include<stdio.h>
/**
 * main -Print out sizes of data types
 * Return: 0
 */

int main(void)
{
char l;
int a;
long int u;
long long int f;
float f;

printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(l));
printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(a));
printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(u));
printf("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(u));
printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(f));
return (0);
}
