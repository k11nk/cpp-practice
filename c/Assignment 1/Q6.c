#include<stdio.h>
#include<stdlib.h>

int main()
{
    int a;
    printf("Enter a five digit integer \n");
    scanf("%d",&a);

    printf("%d %d %d %d %d",a/10000,(a%10000)/1000,(a%1000)/100,(a%100)/10,(a%10));
}