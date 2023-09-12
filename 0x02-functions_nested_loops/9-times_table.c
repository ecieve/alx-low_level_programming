#include "main.h"

/**
 * times_table - Prints the 9 times table starting from 0.
 */
void times_table(void)
{
    int r, c, p;
    for (r = 0; r <= 9; r++)
    {
        for (c = 0; c <= 9; c++)
        {
            p = r * c;

            if (col > 0)
            {
                _putchar(',');
                _putchar(' ');
            }

            if (product < 10)
                _putchar(' ');
            else
                _putchar(product / 10 + '0');

            _putchar(product % 10 + '0');
        }
        _putchar('\n');
    }
}
