#include<stdio.h>
#include<stdlib.h>
#include<time.h>
/**
 * main -Last digit
 * Return: 0
 */
int main(void)
{
int n, l_digit;

srand(time(0));
n = rand() - RAND_MAX / 2;

l_digit = n % 10;
if (n > 5 && l_digit > 0)
{
printf("Last digit of %d is %d and is greater than 5\n", n, l_digit);
}
else if (n == 0 || l_digit == 0)
{
printf("Last digit of %d is 0 and is 0\n", n);
}
else if (n < 6 && n != 0)
{
printf("Last digit of %d is %d and is less than 6 and not 0\n", n, l_digit);
}
return (0);
}
