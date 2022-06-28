#include<stdio.h>

int Fib(int x)
{
    if(x==0)
    {
        return 0;
    }
    if (x==1)
    {
        return 1;
    }else{
        return Fib(x-1)+Fib(x-2);
    }
    
}

int main()
{
    int n;
    printf("Enter the number upto which Fibonacci Series is required \n");
    scanf("%d",&n);

    for(int i=0;i<n;i++)
    {
        
        printf("%d ",Fib(i));
    }
}