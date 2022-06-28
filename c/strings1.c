#include<stdio.h>

void printStr(char str[])
{
   int i =0;
   while(str[i]!='\0')
   {
       printf("%c",str[i]);
       i++;
   }
   printf("\n");
}

int main()
{
  char str[54];

  fgets(str);

  printf("Using Function made: \n");
  printStr(str);

  printf("Using printf: \n");
  printf("%s",str);
  
  printf("Using puts: \n");
  fputs(str);

}