#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n;

    printf("Enter the number for pattern \n");
    scanf("%d",&n);

    int numR = (n*2-1);
    int value = n-1;

    for(int i = 0; i < numR;i++)
    {
        for(int j=0;j<numR;j++)
         {
             int pr =0 ;
             if(abs(i-value)>=abs(j-value))
             {
                 pr = abs(i-value);
                 printf("%d ",pr+1);
             }
             if(abs(i-value)<abs(j-value))
             {
                 pr = abs(j-value);
                 printf("%d ",pr+1);
             }
             
         }
         printf("\n");
    }
}