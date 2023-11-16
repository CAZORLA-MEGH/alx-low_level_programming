/**
 *add_node - adds a new node at the beginning of a list_t list.
 *@head : pointer to pointer to the list_t list.
 *@str : string to put in the new node.
 *Return: the address of the new element, or NULL if it failed.
 */
#include "lists.h"
list_t *add_node(list_t **head, const char *str)
{
int len = 0;
list_t *add_first_node = NULL;
if (head == NULL)
return (NULL);
while (str[len])
len++;


add_first_node = malloc(sizeof(list_t));

if (add_first_node == NULL)
return (*head);

add_first_node->str = strdup(str);
add_first_node->len = len;
add_first_node->next = *head;

*head = add_first_node;

return (*head);
}
