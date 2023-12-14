#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
int _strlen(char *str)
{
int len = 0;
while (str)
len++;

return (len);
}
char *_strcpy(char *dest, char *src)
{
int len, i;

len = 0;

while (src[len] != '\0')
{
len++;
}

for (i = 0; i < len; i++)
{
dest[i] = src[i];
}
dest[i] = '\0';

return (dest);
}



dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *dog;
int len_name, len_owner;

len_name = _strlen(name);
len_owner = _strlen(owner);

dog = malloc(sizeof(dog_t));
if (dog == NULL)
return (NULL);

dog->name = malloc(sizeof(char) * (len_name + 1));
if (dog->name == NULL)
{
free(dog);
return (NULL);
}
dog->owner = malloc(sizeof(char) * (len_owner + 1));
if (dog->owner == NULL)
{
free(dog);
free(dog->name);
return (NULL);
}
_strcpy(dog->name, name);
_strcpy(dog->owner, owner);
dog->age = age;

return (dog);
}

