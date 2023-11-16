/**
 *add_node_end - adds a new node at the end of a list_t list.
 *@head : pointer to pointer to the list_t list
 *@str : string to put in the new node.
 *Return:ddress of the new element, or NULL if it failed.
 */
#include "lists.h"

list_t *add_node_end(list_t **head, const char *str)
{
list_t *new_node = NULL;
list_t *temp = *head;
int len = 0;
for (len = 0; str[len] != 0;)
{
len++;
}
new_node = malloc(sizeof(list_t));
if (new_node == NULL)
return (NULL);
new_node->str = strdup(str);
new_node->len = len;
new_node->next = NULL;
if (*head == NULL)
{
*head = new_node;
return (new_node);
}

while (temp->next != NULL)
{
temp = temp->next;
}
temp->next = new_node;
return (new_node);
}

