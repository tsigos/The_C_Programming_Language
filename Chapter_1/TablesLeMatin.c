#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int WordsLength[100];
	int c, nchar, nother, i, nwords, InWord, wordlength;
	nchar = nother = c = i = nwords = InWord = wordlength = 0;
	
	for(i = 0; i < 100; ++i)
		WordsLength[i] = 0;
	
	while ((c=getchar())!= EOF)
	{
		if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) 
		
	//	if (!( c == ' ' || c == '\n' || c == '\t' || c == ',' || c == '.' || c == '?' || c == '\'' || c =='\"'))
		{
			if (InWord == 0)
			{
				InWord = 1;
				++nchar;
				++nwords;
				++wordlength;
				putchar(c);
			}
			else
			{
				++nchar;
				++wordlength;
				putchar(c);
			}	
		}
		else if (InWord == 0)
			++nother;
		else
		{
			InWord = 0;
			++nother;
			putchar('\n');
			WordsLength[nwords-1] = wordlength;
			wordlength = 0;
		}
	}

        printf("\nThe input file has %d chars, %d \'white\' chars and %d words\n", nchar, nother, nwords);
	
	for (i=0; i < nwords; ++i)
		printf("The length of word No %d is equal to %d\n", i+1, WordsLength[i]);

 	return 0;
}
