#include "main.h"
/**
*read_textfile -  reads a text file and prints it to the POSIX standard output.
*@filename : pointer to name of file.
*@letters :  the number of letters it should read and print
*Return: actual number of letters it could read and print
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
ssize_t  sz = 0, wr = 0;
int fd = 0;
char *c;
if (filename == NULL)
return (0);
c = (char *) malloc (letters * sizeof(char));
if (c == NULL)
{
return (0);
}
fd = open(filename, O_RDONLY);
sz = read(fd, c, letters);
wr = write(STDOUT_FILENO, c, sz);
if (fd == -1 || sz == -1 || wr == -1 || wr != sz)
{
free (c);
return (0);
}
free(c);
close(fd);
return (sz);
}
