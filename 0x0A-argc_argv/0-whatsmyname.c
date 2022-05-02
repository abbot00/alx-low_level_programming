#include <stdio.h>
/**
 * main - prints the name of program
 * @argc: argc
 * @argv: argv
 * Return: zero if ran correctly
 */
int main(int argc, char *argv[])
{
if (argc > 0)
printf("%s\n", argv[0]);
return (0);
}
