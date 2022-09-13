#include <stdio.h>

/**
*main - To print the alphabet in lowercase
*
*Return: Always 0 (Success)
*/
int main(void)
{
	char letter;

	for (letter = 'a'; low <= 'z'; letter++)
		putchar(letter);
		putchar('\n');

	return (0);
}
