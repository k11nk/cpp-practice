#include<stdio.h>

int main()
{
    int x,y;
    x = 2003;
    x++;
    y = x++;
    printf("x is = %d,y is = %d \n",x,y);
    y = x;
    y++;
    x--;
    printf("x is = %d,y is = %d \n",x,y);
}