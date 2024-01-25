#include <stdio.h>
#include <clocale>
#include <string.h>
#define LISTSIZE 5

int main(void)
{
	setlocale(LC_ALL, "Russian"); //Добавим русский язык
	const char* list[LISTSIZE] =
	{
		"astronomy", " astounding", "astrophysics", "ostracize", "asterism"
	};
	int count = 0;
	int i;
	for (i = 0; i < LISTSIZE;i++)
		if (strncmp(list[i], "astro", 5) == 0)
		{
			printf("has been found: %s\n", list[i]);
			count++;
		}
	printf("list contains %d words that start with astro.\n", count);

	return 0;
}

