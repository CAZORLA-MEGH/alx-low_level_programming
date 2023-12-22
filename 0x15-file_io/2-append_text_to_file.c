#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
/**
* append_text_to_file - appends text at the end of a file.
* @filename: pointer to nam eof file.
* @text_content: null terminated string.
*
* Return: 1 on success, -1 on failure.
*/
int append_text_to_file(const char *filename, char *text_content)
{
int fd, append, i = 0;
if (filename == NULL)
return (-1);
if (text_content != NULL)
{
for (i = 0; text_content[i];)
i++;
}

fd = open(filename, O_WRONLY  | O_APPEND);
append = write(fd, text_content, i);
if (fd == -1 || append == -1 || append != i)
{
return (-1);
}
close(fd);
return (1);
}

