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

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
typedef struct dog dog_t;
dog_t *new_dog(char *name, float age, char *owner);
int _strlen(char *str);
char *_strcpy(char *dest, char *src)
#endif /* DOG_H */
