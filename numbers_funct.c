/**
 * print_decimal - prints a decimal
 * @d: argument
 * Return: 1
 */

int print_decimal(va_list d)
{
        int s, len = 0;
        int j = 1;
        unsigned int n = 0;

        s = va_arg(d, int);

        if (s < 0)
        {
                _putchar('-');
                n = s * -1;
                len++;
        }
        else
        {
                n = s;
        }

        while (n / j < 9)
        {
                j = j * 10;
        }

        while ( j != 0)
        {
                len = len + _putchar(n / j + '0');
                n = n % j;
                j = j / 10;
        }
        return (len);
}

