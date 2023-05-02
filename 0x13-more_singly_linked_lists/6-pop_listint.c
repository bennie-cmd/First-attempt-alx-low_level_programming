#include "lists.h"

/**
 * pop_listint - this deletes head node of a linked list
 * @head: this is a pointer to the first linked list element
 * Return: the data inside deleted element,
 * or 0 if the list is empty
 */
int pop_listint(listint_t **head)
{

listint_t *temp;
int num;

if (!head || !*head)
return (0);

num = (*head)->n;
temp = (*head)->next;
free(*head);
*head = temp;

return (num);
}
