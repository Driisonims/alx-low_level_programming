#include "main.h"
#include <stdio.h>

/**
 * print_most_numbers - prints the number, from 0 to 9
 */
void print_most_numbers(void)
{
int i;
for (i = 48; i < 58; i++)
{
if (i == 50 || i == 52)
continue;
_putchar(i);
}
_putchar('\n');
}
