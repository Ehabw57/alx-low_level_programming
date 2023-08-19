
#include "variadic_functions.h"
#include <stdio.h>

/**
 * pi - print intger
 * @Ilist: va_list var
 */
void pi(va_list Ilist)
{
	printf("%i", va_arg(Ilist, int));
}

/**
 * pf - print float
 * @Ilist: va_list var
 */
void pf(va_list Ilist)
{
	printf("%f", va_arg(Ilist, double));
}

/**
 * pc - print char
 * @Ilist: va_list var
 */
void pc(va_list Ilist)
{
	printf("%c", va_arg(Ilist, int));
}

/**
 * ps - print string
 * @Ilist: va_list var
 */
void ps(va_list Ilist)
{
	char *str = va_arg(Ilist, char *);

	if (str == NULL)
	{
		printf("(nil)");
		return;
	}

	printf("%s", str);
}

/**
 * print_all - smilliar function to printf
 * @format: the format spcifer
 */
void print_all(const char *const format, ...)
{
	int idx;
	int j = 0;
	char r[1];
	void (*ptrf)(va_list args);
	print arr[5] = {
		{"i", pi},
		{"f", pf},
		{"c", pc},
		{"s", ps}};
	va_list Ilist;

	va_start(Ilist, format);

	while (format[j] != '\0')
	{
		idx = 0;
		while (idx < 4)
		{
			r[0] = format[j];
			r[1] = '\0';
			if (strcmp(arr[idx].c, r) == 0)
			{
				ptrf = arr[idx].ptr;
				ptrf(Ilist);
				if (format[j + 1] != '\0')
					printf(", ");
				break;
			}
			idx++;
		}
		j++;
	}
	printf("\n");
	va_end(Ilist);
}
