#include<stdio.h>

int Junk(int i,int* j);

int main()
{
    int i = -5,j=4;
    Junk(i,&j);
    printf("i=%d,j=%d,i,j");
}
int Junk(int i,int* j)
{
    i = i * i;
    *j = *j * *j;
}