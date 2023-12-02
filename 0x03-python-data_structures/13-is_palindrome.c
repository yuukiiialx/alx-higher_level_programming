<<<<<<< HEAD
#include "lists.h"

/**
 * is_palindrome - Function that checking if it is palindrome
 *
 * @head: The head of Linked List
 *
 * Return: 1 is palindrome else return 0
 */

int is_palindrome(listint_t **head)
{

	if (!*head || !(*head))
	{
		return (1);
	}

	if (palindrome_check(head, *head))
	{
		return (1);
	}
	return (0);
}

/**
 *  palindrome_check - Function that check for palindrome
 *
 *  @left: going to the left
 *
 *  @right: going to the right
 *
 *  Return: int
 */


int palindrome_check(listint_t **left, listint_t *right)
{
	int is_pal = 0;

	if (right)
	{
		is_pal = palindrome_check(left, right->next);
	}
	else
	{
		return (1);
	}

	if (is_pal == 1)
	{
		if ((*left)->n == right->n)
		{
			(*left) = (*left)->next;
			return (1);
		}
	}
	return (0);
}
=======
#include "lists.h"

/**
 * is_palindrome - Function that checking if it is palindrome
 *
 * @head: The head of Linked List
 *
 * Return: 1 is palindrome else return 0
 */

int is_palindrome(listint_t **head)
{

	if (!*head || !(*head))
	{
		return (1);
	}

	if (palindrome_check(head, *head))
	{
		return (1);
	}
	return (0);
}

/**
 *  palindrome_check - Function that check for palindrome
 *
 *  @left: going to the left
 *
 *  @right: going to the right
 *
 *  Return: int
 */


int palindrome_check(listint_t **left, listint_t *right)
{
	int is_pal = 0;

	if (right)
	{
		is_pal = palindrome_check(left, right->next);
	}
	else
	{
		return (1);
	}

	if (is_pal == 1)
	{
		if ((*left)->n == right->n)
		{
			(*left) = (*left)->next;
			return (1);
		}
	}
	return (0);
}
>>>>>>> 15592d110180f2a1d0c62024d84a0e3bee0e7005
