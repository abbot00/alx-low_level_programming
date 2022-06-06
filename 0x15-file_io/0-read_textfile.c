#include "main.h"
/**
 * read_textfile - reads a text file and prints the letters
 * @filename: filename.
 * @letters: numbers of letters printed.
 *
 * Return: numbers of letters printed. It fails, returns 0.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
int fd;
ssize_t nrd, nwr;
char *bufa;
if (!filename)
return (0);
fd = open(filename, O_RDONLY);
if (fd == -1)
return (0);
bufa = malloc(sizeof(char) * (letters));
if (!bufa)
return (0);
nrd = read(fd, bufa, letters);
nwr = write(STDOUT_FILENO, bufa, nrd);
close(fd);
free(bufa);
return (nwr);
}
