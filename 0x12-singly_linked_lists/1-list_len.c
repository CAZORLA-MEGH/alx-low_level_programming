#include "lists.h"

/**
 *list_len - returns the number of elements in a linked list_t list.
 *@h : pointer to list.
 *Return: number of elements in h.
 */
size_t list_len(const list_t *h)
{
size_t num_elements = 0;
while (h)
{
h = h->next;
num_elements++;
}
return (num_elements);
}

