/**
 * jack_bauer - prints every minute of the day  starting from 00:00 to 23:59.
 */
#include <stdio.h>
#include "main.h"

void jack_bauer(void)
{
int x, z;
for (x = 0; x <= 23; x++)
{
for (z = 0; z <= 59; z++)
{
putchar((x / 10) + '0');
putchar((x / 10) + '0');
putchar(58);
putchar((z / 10) + '0');
putchar((z / 10) + '0');
putchar('\n');

}
}
}
