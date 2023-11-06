#ifndef DOG_H
#define DOG_H
/**
 * struct dog - a dog's basic info
 * @name: variable name
 * @age:variable age
 * @owner:variable owner
 */
struct dog
{
char *name;
float age;
char *owner;
};
/**
 * struct dog_t - a dog's basic info
 * @name: variable name
 * @age:variable age
 * @owner:variable owner
 */
struct dog_t
{
char *name;
float age;
char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif /* DOG_H */
