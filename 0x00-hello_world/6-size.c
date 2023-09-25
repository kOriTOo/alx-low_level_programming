#include <stdio.h>
/**
 * main - prints the phrase "Programming is like building a multilingual puzzle
 * Return: 0 if exited properly, non-zero otherwise
 */
int main(void)
{
	char i;
	int x;
	long int z;
	long long int a;
	float b;

	printf("Size of char: %lu byte(s)\n", (unsigned long)sizeof(i));
	printf("Size of int: %lu byte(s)\n", (unsigned long)sizeof(x));
	printf("Size of long int: %lu byte(s)\n", (unsigned long)sizeof(z));
	printf("Size of long long int: %lu byte(s)\n", (unsigned long)sizeof(a));
	printf("Size of float: %lu byte(s)\n", (unsigned long)sizeof(b));

	return 0;
}
