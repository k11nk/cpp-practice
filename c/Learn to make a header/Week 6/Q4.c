#include<stdio.h>


int main()
{
    int n;
    printf("Enter the no of elements you require in array  \n");
    scanf("%d",&n);
    int A[n];

    printf("Enter the values of elements in array \n");

    for(int i=0;i<n;i++){
    
        scanf("%d",&A[i]);
    }
    printf("First number of array is %d and last number of array is %d \n",A[0],A[n-1]);
}    