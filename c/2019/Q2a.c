#include<stdio.h>

void swap(int* x,int* y)
{
    int temp = *x;
    *x = *y;
    *y = temp;

}

int main()
{
    int a,b;

    printf("Enter the number for a \n");
    scanf("%d",&a);

    printf("Enter the number for b \n");
    scanf("%d",&b);
    
    printf("a = %d , b = %d \n",a,b);
    swap(&a,&b);

    printf("a = %d , b = %d \n",a,b);
}