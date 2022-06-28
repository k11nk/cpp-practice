#include<stdio.h>

int main()
{
    int a,b,c;
    float d;

    printf("Equation is as follow ax^2+bx+c=0 \n");
     
    printf("Enter the value of coefficient of x^2 \n");
    scanf("%d",&a);

    printf("Enter the value of coefficient of x \n");
    scanf("%d",&b);

    printf("Enter the value of constant \n");
    scanf("%d",&c);

    d = b*b-4*a*c;

    if(d<0){
        printf("Roots are imaginary \n");
    }
    if(d==0){
        printf("Roots are real and equal \n");
    }
    if(d>0){
        printf("Roots are Real and unequal \n");
    }
}