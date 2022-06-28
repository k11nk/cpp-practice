#include<stdio.h>

int factfind(int n)
{
    if(n==1)
     {
         return 1;
     }else{
         return n*factfind(n-1);
     }
}

int main()
{
    int i,r;

    printf("Enter value of which you need factorial \n");
    scanf("%d",&i);
    
    r = factfind(i);

    printf("Factorial of %d is = %d \n",i,r);

}