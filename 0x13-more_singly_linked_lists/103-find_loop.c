#include "lists.h"

/**
 * find_listint_loop - finds the loop in a linked list.
 * @head: pointer that find the loop in a linked list.
 * Return: address of the node where the loop starts, or NULL.
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *driver = head;
	listint_t *car = head;

	if (!head)
		return (NULL);

	while (driver && car && car->next)
	{
		car = car->next->next;
		driver = driver->next;
		if (car == driver)
		{
			driver = head;
			while (driver != car)
			{
				driver = driver->next;
				car = car->next;
			}
			return (car);
		}
	}

	return (NULL);
}
