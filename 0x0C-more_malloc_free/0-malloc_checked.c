#include <stdio.h>
#include <stdlib.h>
void *malloc_checked(unsigned int b)

{

void *ptr = malloc (b * sizeof(int));
if( ptr == NULL){
printf(stderr, "malloc failed\n");

exit(98);
}
return ptr;
}
