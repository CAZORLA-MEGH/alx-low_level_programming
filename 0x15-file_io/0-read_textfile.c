#include "main.h"
/**
*read_textfile -  reads a text file and prints it to the POSIX standard output.
*@filename : pointer to name of file.
*@letters :  the number of letters it should read and print
*Return: actual number of letters it could read and print
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
size_t i = 0, sz = 0;
int fd = 0;
char *c;
size_t bytes_written;
c = (char *) malloc (letters * sizeof(char));
if (c == NULL)
{
return (0);
}
fd = open(filename, O_RDONLY);
if (fd < 0 || filename == NULL)
{
return (0);
}
sz = read(fd, c, letters);
c[sz] = '\0';
bytes_written = write(STDOUT_FILENO, c, sz);
if (bytes_written != sz)
{
free(c);
close(fd);
return 0;
}

for (i = 0; i < sz; i++)
{
putchar(c[i]);
}
free(c);
close(fd);
return (sz);
}
