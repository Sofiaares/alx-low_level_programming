#include <stdio.h>
#include <stdlib.h>

/**
 * main - main function of program
 *
 * @argc: param arguments counts
 * @argv: param arguments vector
 *
 * Return: returns 1 if error and 0if successful
 */

int main(int argc, char *argv[])
{
	int n1, n2, p;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	n1 = atoi(argv[1]);
	n2 = atoi(argv[2]);
	p = n1 * n2;

	printf("%d\n", p);

	return (0);
}
