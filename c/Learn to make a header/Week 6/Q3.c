#include<stdio.h>

int main()
{
    int n;
    printf("Enter the no of elements you require in array  \n");
    scanf("%d",&n);
    int A[n];

    for(int i=0;i<n;i++){
        printf("Enter the value for A[%d] \n",i);
        scanf("%d",&A[i]);
    }
    
    int min =0;

    for(int i=0;i<n;i++)
    {
      if(A[min]>A[i]){
          min = i;
      }
    }
    printf("Smallest number in Array is A[%d] = %d \n",min,A[min]);
}    