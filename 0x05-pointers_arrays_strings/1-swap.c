#include "main.h"

/** main- function that swaps the values of two integers
 *
 * Retun: Always 0
 */

int main(void)
{
	int a;
	int b;

	a = 98;
	b = 42;
	_putchar("a=%d, b=%d\n", a, b);
	swap_int(&a, &b);
	_putchar("a=%d, b=%d\n", a, b);
}
