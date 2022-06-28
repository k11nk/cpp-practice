#include<stdio.h>

int main()
{
    int a,b,c;
    printf("Enter the three values for  \n");
    scanf("%d  %d  %d",&a,&b,&c);

    if(a>b)
    {
        if(a>c){
            printf("a is the largest number holding value = %d \n",a);
        }else{
            printf("c is the largest number holding value = %d \n",c);
        }
    }else{
        if(c>b){
            printf("c is the largest number holding value = %d \n",c);
        }else{
            printf("b is the largest number holding value = %d \n",b);
        }
    }
}