/**
 *init_dog - itialize a variable of type struct dog
 *@d : structure
 *@name : variable string
 *@age : variable float
 *@owner : variable string
 */
#include <stdlib.h>
#include <stdio.h>
#include "dog.h"
void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d == NULL)
d = malloc(sizeof(struct dog));

d->name = name;
d->age = age;
d->owner = owner;
}
