#include<stdio.h>

int main()
{
    int n;
    int sum=0;
    printf("Enter the no of elements you require in array  \n");
    scanf("%d",&n);
    //We need to define size of array
    int A[n];

    for(int i=0;i<n;i++){
        printf("Enter the value for A[%d] \n",i);
        scanf("%d",&A[i]);
    }
    
    for(int i=0;i<n;i++){
        
        sum = sum + A[i];
    }
   printf("Sum of all the elements of arrays is %d \n",sum);
   float average= sum/n;
   printf("Average of Elements in arrays is %2f \n",average);

}