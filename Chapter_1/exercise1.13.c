#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int LengthFrequency[50];
	int c, i, nwords, InWord, wordlength;
	c = i = nwords = InWord = wordlength = 0;
	
	for(i = 0; i < 50; ++i)
		LengthFrequency[i] = 0;
	
	while ((c=getchar())!= EOF)
	{
		if (!((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')))
		{
			if (nwords == 0)
				;
			else 
			{
				InWord = 0;
				++LengthFrequency[wordlength];
			}
		}
		else if (InWord == 0)
		{
			InWord = 1;
			++LengthFrequency[wordlength];
			++nwords;
			wordlength = 1;
		}
		else
			++wordlength;
	}
        printf("\nThe number of words in the imput text = %d\n", nwords+1);
	
	for (i=0; i < 50; ++i)
		if (LengthFrequency[i] != 0)
			printf("Number of words with length equal to %d = %d\n", i, LengthFrequency[i]);

 	return 0;
}
