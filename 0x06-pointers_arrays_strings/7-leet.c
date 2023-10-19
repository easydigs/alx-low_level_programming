#include "main.h"

/**
 * leet - function that encodes a string into 1337.
 * letters a and A are replaced by 4
 * letters e and E are replaced by 3
 * letters o and O are replaced by 0
 * letters t and T are replaced by 7
 * letters l abd L are replaced by 1
 * @s: pointer to string
 *
 * Return: pointer to s
 */

char *leet(char *s)
{
	int string_len, leetCount;
	char leetLetters[] = "aAeEoOtTlL";
	char leetNums[] = "4433007711";

	string_len = 0;
	while (s[string_len] != '\0')
	{
		leetCount = 0;
		while (leetCount < 10)
		{
			if (leetLetters[leetCount] == s[string_len])
			{
				s[string_len] = leetNums[leetCount];
			}
			leetCount++;
		}
		string_len++;
	}
	return (s);
}
