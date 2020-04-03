#include <stdio.h>

#define MAXWORD 25

void reverse(char to[], char from[]);

int main(void)
{
	char word[MAXWORD], new_word[MAXWORD];
	int i, c;

	i = 0;

	printf("\nPlease write a word:");
	
	while ((c=getchar()) != '\n')
	{
		word[i] = c;
		++i;
	}
	
	word[i] = '\0';
	reverse(new_word, word);
	printf("\nThe reversed version of your word is %s\n", new_word);
	
	return 0;
}

void reverse(char to[], char from[])
{
	int i, j, len;

	i = j = len = 0;

	for(i=0; from[i] != '\0'; ++i)
		;
	len = i;

	for(j=0; j<= len; ++j)
		to[j]= from[len - 1 - j];
	++j;
	to[j] = '\0';
	
	return;
}
