#include<stdio.h>
#include<unistd.h>
/**
 * main -Printing a code in standard error
 * Return: 1
 */

int main(void)
{
write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", sizeof("and that piece of art is useful\" - Dora Korpar, 2015-10-19\n"));
return (0);
}
