/**
 * print_dog - prints a struct dog
 * @d: struct dog to print
 */
#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
void print_dog(struct dog *d)
{


if (d == NULL)
if (d->name == NULL)
d->name = "(nil)";
if (d->owner == NULL)
d->owner = "(nil)";
if (d->age < 0)
printf("Age: (nil)");

printf("Name: %s\n", d->name);
printf("Age: %f\n", d->age);
printf("Owner: %s\n", d->owner);

}
