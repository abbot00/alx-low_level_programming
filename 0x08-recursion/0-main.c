#include <unistd.h>

int _putchar(char c);
void _puts_recursion(char *s);
void _print_rev_recursion(char *s);
int _strlen_recursion(char *s);
int factorial(int n);
int _pow_recursion(int x, int y);
int _sqrt_recursion(int n);
int is_prime_number(int n);
/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
  _puts_recursion("Puts with recursion");
  return (0);
}
#include "main.h"

/**
 * _puts_recursion - function that prints a string follow
 * by a new line.
 * @s: Pointer to input string
 * Return: void
 */
void _puts_recursion(char *s)
{
  if (*s == '\0')
    {
      _putchar('\n');
      return;
    }
  _putchar(*s);
  _puts_recursion(s + 1);
}

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
  return (write(1, &c, 1));
}
