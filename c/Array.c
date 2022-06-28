#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    char name[13]="Kalp Kansara";
    printf("My name is %s \n",name);

    name[3]='f';
    printf("My name is %s \n",name);

    char food[]="Thepla";
    printf("The best food is %s \n",food);

    strcpy(food,"Undhyu");
    printf("The best food is %s \n",food);
}