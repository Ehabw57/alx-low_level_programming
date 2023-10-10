#include "main.h"
/**
 * *leet - Encodes a string into leet
 * @source: String to encode
 * Return: the encoded string
*/
char *leet(char *source)
{
	/*make an arrya of the decripetd char*/
	char ch[] = {'A', 'a', 'E', 'e', 'O', 'o', 'T', 't', 'L', 'l'};
	/*make an arraay of decripted nums*/
	char code[] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1'};
	int i = 0, j;

	/*use nested loop to go throug each char in both*/
	while (source[i] != '\0')
	{
		for (j = 0; ch[j] != '\0'; j++)
		{
			/*if you found a match replace it with its code*/
			if (source[i] == ch[j])
			{
				source[i] = code[j];
				break;
			}
		}
		i++;
	}
	return (source);
}
