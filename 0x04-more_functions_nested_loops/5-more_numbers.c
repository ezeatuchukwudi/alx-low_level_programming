#include "main.h"

/**
 * more_numbers - Print 10 times the numbers since 0 up to 14
 * Description: - Prints 10 times the number
 * Return: 10 times of the number since 0 up to 14
 */

void more_numbers(void)
{

int x;
int y;


for (x = 0; x <= 10; x++)
{
for (y = 0; y <= 14; y++)
{
if (y > 0)
{
_putchar((y / 10) + '0');
}
_putchar((y % 10) + '0');
}
_putchar(x + '0');
}
_putchar('\n');
}
