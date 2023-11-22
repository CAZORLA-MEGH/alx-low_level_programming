/**
 *free_listint2 - that frees a listint_t list.
 *@head : pointer to head of list.
 */
#include "lists.h"
void free_listint2(listint_t **head)
{
if (head == NULL)
return;
listint_t *temp;
while (*head)
{
temp = (*head)->next;
free(*head);
*head = temp;
}
head = NULL;
}
