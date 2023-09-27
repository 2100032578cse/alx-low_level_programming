#include "main.h"

/**
 * len - checks length of string
 * @s:string to check
 * Return: length
*/
int len(char *s)
{
	if (*s != '\0')
		return (1 + len(s + 1));
	return (0);
}
/**
 * check - checks a palindrome
 * @s: string to use
 * @l: length of s
 * @i: position of s to be checked
 * Return: 1 if yes,o if not
*/
int check(char *s, int l, int i)
{
	if (i >= l)
	{
		return (1);
	}
	if (s[l] == s[i])
	{
		return (check(s, l - 1, i + 1));
	}
	return (0);
}

/**
 * is_palindrome - checks if a string is palindrome
 * @s: string to check
 * Return: 1 if yes 0 if not
*/
int is_palindrome(char *s)
{
	return (check(s, len(s), 0));
}
