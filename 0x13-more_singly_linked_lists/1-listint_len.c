#include "lists.h"

/**
 * listint_len - the function returns number of elements in a linked lists
 * @h: linked list of type listint_t to be traverse
 * Return: number of nodes
 */
size_t listint_len(const listint_t *h)
{
size_t num = 0;
while (h)
{
num++;
h = h->next;
}
return (num);
}