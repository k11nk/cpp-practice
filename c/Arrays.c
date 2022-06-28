#include<stdio.h>

int main()
{
   int a=3,b=3;
   int A[a][b];
   for(int i=0;i<3;i++){
       for(int j=0;j<3;j++){
           printf("Enter the Value for A[%d][%d] \n",i,j);
           scanf("%d",&A[i][j]);
       }
   } 
   for(int i=0;i<3;i++){
       for(int j=0;j<3;j++){
           printf("%d \t",A[i][j]);
       }
       printf("\n");
   }

}