#include "main.h"
#include <stdio.h>

/**
 * main -  check the code
 *
 * Return: Always 0.
 */

int main(void)
{

	int nb;

	nb = _atoi("98");
	printf("%d\n", nb);
	nb = _atoi("-402");
	printf("%d\n", nb);
	nb = _atoi("          -------++++++------+++++-----98");
	printf("%d\n", nb);
	nb = _atoi("214748364");
	printf("%d\n", nb);
	nb = _atoi("0");
	printf("%d\n", nb);
	nb = _atoi("suite 402");
	printf("%d\n", nb);
	nb = _atoi(" + + - -98 battery street; san francisco, CA 94111 - USA ");
	printf("%d\n", nb);
	nb = _atoi("---+++-++sui-te- 402 #cisfun  ");
	printf("%d\n", nb);
	return (0);
}
