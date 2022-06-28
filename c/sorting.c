#include<stdio.h>

int main()
{ 
    int i,temp,swapped;
    int noofelements;

    printf("Enter the number of elements in Array \n");
    scanf("%d",&noofelements);

    int A[noofelements];

    printf("Enter the elements of array \n");

    for(i=0;i<noofelements;i++){
        scanf("%d",&A[i]);
    }      
    

    
   while(1){
        swapped = 0;

        for(i=0;i<noofelements-1;i++){
            if(A[i]>A[i+1]){
                temp = A[i];
                A[i] = A[i+1];
                A[i+1] = temp;
                swapped = 1;
            }
        }

        if(swapped==0){
            break;
        }
       
        
    }
    printf("Sorted list \n");
    for(i=0;i<noofelements;i++){
      printf("%d \n",A[i]);  
    }

    

}