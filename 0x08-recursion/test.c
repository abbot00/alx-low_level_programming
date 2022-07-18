#include <stdio.h>
#include <cs50.h>

int main(void)
{
  // attempt to read character from stdin
  char c = get_char("Enter char: ");

  // ensure character was read successfully
  if (c == CHAR_MAX)
    {
      return 1;
    }

  char next = get_char("You just entered %c. Enter another char: ", c);

  if (next == CHAR_MAX)
    {
      return 1;
    }

  printf("The last char you entered was %c\n", next);
}
