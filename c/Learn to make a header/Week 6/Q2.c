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
    
    int max =0;

    for(int i=0;i<n;i++)
    {
      if(A[max]<A[i]){
          max = i;
      }
    }
    printf("Biggest number in Array is A[%d] = %d \n",max,A[max]);
}    