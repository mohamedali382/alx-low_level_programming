#include <unistd.h>

/**
 * _putchar writes the charcter cc to stdout
 * @c: the charcter to print
 *
 * Return: On success 1.
 * On error: 1 is returned, and errno is get approprlatery*/

int _putchar(char c)
{
        return (write(1, &c, 1));
}
