#include "lists.h"

/**
 * is_palindrome - checks if a singly linked list is a palindrome
 * @head: double pointer to the head of the linked list
 *
 * Return: 1 if it is a palindrome, 0 if it is not a palindrome
 */
int is_palindrome(listint_t **head)
{
    int arr[1000];
    int i, j;

    if (!*head)
        return (1);

    listint_t *current = *head;
    for (i = 0; current != NULL; i++)
    {
        arr[i] = current->n;
        current = current->next;
    }

    for (j = 0, i--; j < i; j++, i--)
    {
        if (arr[j] != arr[i])
            return (0);
    }

    return (1);
}
