#include "lists.h"
/**
 *print_list - prints all the elements of a list_t list.
 *@h : pointer to list.
 *Return: number of nodes.
 */

size_t print_list(const list_t *h)

{
size_t num_nodes = 0;
if (h == NULL)
return (num_nodes);
while (h != NULL)
{
if (h->str == NULL)
{
printf("[0] (nill)\n");
}
else
{
printf("[%d] %s\n", h->len, h->str);
}
h = h->next;
num_nodes++;
}
return (num_nodes);
}
