#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    char firstName[20];
    char Crush[20];
    int numberofBabies;

    printf("What is your Name? \n");
    scanf("%s",firstName);

    printf("Who are you going to Marry? \n");
    scanf("%s",Crush);

    printf("How many babies will you have? \n");
    scanf("%d", &numberofBabies);

    printf("%s and %s will marry and have %d number of babies \n",firstName,Crush,numberofBabies);
      
    }

    //You have to use '&' in scanf before variables
    //If you give a space in scanf for compiler scanf value has ended 