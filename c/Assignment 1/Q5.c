#include<stdio.h>
#include<stdlib.h>

int main()
{
    int a,b,c;
    printf("Enter the value for first value \n");
    scanf("%d",&a);

    printf("Enter the value for second value \n");
    scanf("%d",&b);

    c = a%b;
    if(c==0){
        printf("First value is multiple of second value");
    }else{
        printf("First term is not a multiple of second value \n");
    }
}