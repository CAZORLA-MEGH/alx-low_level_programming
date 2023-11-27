#include "main.h"
/**
*create_file - creates a file.
*@filename : name of the file to create
*@text_content : string to write to the file
*Return: 1 on success, -1 on failure
*/
int create_file(const char *filename, char *text_content)
{
int sz = 0, i = 0;
int fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 600);
if (filename == NULL || text_content == NULL)
return (0);
if (fd == -1)
{
return (0);
}
for (i = 0; text_content[i] != '\0'; i++)
sz = write(fd, text_content, i);
if (sz == -1 || fd == -1)
{
return (0);
}
close(fd);
return (1);
}

