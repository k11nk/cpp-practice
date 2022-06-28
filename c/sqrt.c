#include<stdio.h>
int main(int argc, char const *argv[])
{
    int num=64;
    int count=1;
    for ( num; num > 0; num=num/2)
    {
        count=num;
        count=count+1;
        printf("square root is %d" , count/2);
    }
    
    return 0;
}
