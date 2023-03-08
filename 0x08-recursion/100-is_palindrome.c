#include "main.h"

int check_palindrome(char *s);

/**
 * is_palindrome - returns if a string is palindrome
 * @s: This is the string to check
 * Return: 1 if palindrome, 0 if not
 */
int is_palindrome(char *s)
{
	if (*s == '0')
	{
		return (1);
	}
	else
	{
		return (check_palindrome(s));
	}
}

/**
 * check_palindrome - checks if a string is palindrome
 * @s: This is the string value to check
 * Return: 1 if palindrome, 0 if not
 */
int check_palindrome(char *s)
{
	int l = _strlen_recursion(s) - 1;

	if (*s == s[l])
	{
		s++;
		l--;
	}
	else
	{
		return (0);
	}
	return (1);
}

/**
 * _strlen_recursion - To get the length of a string
 * @s: The string to find the length
 * Return: The string length
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	s++;
	return (_strlen_recursion(s) + 1);
}
