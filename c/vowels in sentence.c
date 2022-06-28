#include<stdio.h>

int main()
{
    char sentence[100];
    int i,vowels=0,consonants=0;

      for (i = 0; sentence[i] != '\0'; i++)
    {
        if ((sentence[i] == 'a' || sentence[i] == 'e' || sentence[i] ==
        'i' || sentence[i] == 'o' || sentence[i] == 'u') ||
        (sentence[i] == 'A' || sentence[i] == 'E' || sentence[i] ==
        'I' || sentence[i] == 'O' || sentence[i] == 'U'))
        {
            vowels = vowels + 1;
        }
        else
        {
            consonants = consonants + 1;
        }
}