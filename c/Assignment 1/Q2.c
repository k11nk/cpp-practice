#include<stdio.h>
#include<stdlib.h>

int main()
{
    int a,b;
    printf("Enter your first value \n");
    scanf("%d",&a);
    printf("Enter the second value \n");
    scanf("%d",&b);
    if(a>=b){
        if(a==b){
            printf("The numbers are equal \n");
        }else{
        printf("%d is larger \n",a);
        }     
    }else{
        printf("%d is larger \n",b);
    }
}