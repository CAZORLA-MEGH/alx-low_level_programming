/**
 *add_nodeint -  adds a new node at the beginning of a linked list.
 *@head : pointer to pointer to the listint_t.
 *@n : data to insert in that new node
 *Return: the address of the new element, or NULL if it failed
 */

#include "lists.h"
listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *add_first_node = NULL;
if (head == NULL)
return (NULL);


add_first_node = malloc(sizeof(listint_t));

if (add_first_node == NULL)
return (*head);

add_first_node->n = n;
add_first_node->next = *head;

*head = add_first_node;

return (*head);
}
