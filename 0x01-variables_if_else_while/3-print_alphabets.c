#include<stdio.h>
#include<stdlib.h>
/**
 * main-Prints alphabets lowercase and uppercase
 * Return: 0
 */
int main(void)
{
int a;
int A;

for (a = 'a'; a <= 'z'; ++a)
putchar(a);
for (A = 'A'; A <= 'Z'; ++A)
putchar(A);
putchar('\n');
return (0);
}
