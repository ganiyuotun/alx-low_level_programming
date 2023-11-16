#include <stdio.h>
#include "custom_lists.h"

/**
* print_list - displays all the elements of a linked list
* @h: pointer to the list_t list to display
*
* Return: the number of nodes displayed
*/
size_t print_list(const list_t *h)
{
size_t count = 0;

while (h)
{
if (!h->str)
printf("[0] (nil)\n");
else
printf("[%u] %s\n", h->len, h->str);

h = h->next;
count++;
}

return (count);
}
