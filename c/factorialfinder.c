#include<stdio.h>

int factorialfinder(int x)
{
   if(x==1){
       return 1;
   }else{
       return x*factorialfinder(x-1);
   }
}

int main()
{
    int n,b;
    printf("Enter a number \n");
    scanf("%d",&n);
    b = factorialfinder(n);
    printf("%d",b);
}