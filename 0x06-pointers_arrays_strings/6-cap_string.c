#include "main.h"
/**
 * *cap_string - convert each first char of word to cap
 * @sorce: The string to cap
 * Return: caped sorce or NULL if sorce = NULL
 */
char *cap_string(char *sorce)
{
	/*detrmine an array to word seprator*/
	char sep[] = {'\n',
				  '\t',
				  ' ',
				  ',',
				  ';',
				  '.',
				  '!',
				  '?',
				  '\"',
				  '(',
				  ')',
				  '{',
				  '}'};
	int i = 0, j = 0;

	if (sorce == NULL)
		return (NULL);

	/*make nested loop for both source and array sep*/
	while (sorce[i] != '\0')
	{
		for (j = 0; sep[j] != '\0'; j++)
		{
			if (sorce[i] == sep[j])
			{
				/*if you match an asccie from 97 to 122 */
				if (sorce[i + 1] > 96 && sorce[i + 1] < 123)
				{
					/*convert the next char in to cap*/
					sorce[i + 1] -= 32;
				}
			}
		}
		i++;
	}
	return (sorce);
}
