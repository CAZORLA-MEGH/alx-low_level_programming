#include "main.h"
/**
*create_file - creates a file.
*@filename : name of the file to create
*@text_content : string to write to the file
*Return: 1 on success, -1 on failure
*/
int create_file(const char *filename, char *text_content)
{
int wr = 0, i = 0;
int fd;
if (filename == NULL)
return (-1);
for (i = 0; text_content[i] != '\0'; i++)
fd = open(filename, O_RDWR | O_CREAT | O_TRUNC, 600);
if (fd == -1)
{
return (-1);
}
if (text_content)
{
wr = write(fd, text_content, i);
if (wr == -1)
return (-1);
}
if (close(fd) == -1)
return (-1);
close(fd);
return (1);
}

