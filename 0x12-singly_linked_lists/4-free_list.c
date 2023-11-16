/**
 *free_list - fress a list_t.
 *@head : pointer to head of list.
 */
#include "lists.h"

void free_list(list_t *head)
{
list_t *temp;
while (head)
{
temp = head->next;
free(head->str);
free(head);
head = temp;
}
}
