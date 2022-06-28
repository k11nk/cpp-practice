#include<stdio.h>

int main()
{
    int n;

    printf("Enter N for N X N matrices \n");
    scanf("%d",&n);

    int a[n][n];
    
    printf("Enter the elements for matrices \n");
    for(int i=0;i<n;i++)
     {
         for(int j = 0;j<n;j++)
         {
           scanf("%d",&a[i][j]);
         }
     }

   int b[n][n];
    
    printf("Enter the elements for matrices \n");
    for(int i=0;i<n;i++)
    {
         for(int j = 0;j<n;j++)
         {
           scanf("%d",&b[i][j]);
         }
    }

    int c[n][n];
     
    int sum=0;
    for(int i=0;i<n;i++)
    {
        for(int j = 0;j<n;j++)
        {
            for(int k =0;k<n;k++)
            {
                sum = sum + a[i][k]*b[k][j];
                c[i][j]=sum;
            }
        }
    }

    printf("The first Matrix \n");
    for(int i =0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
          printf("%d ",a[i][j]);
        }
        printf("\n");
    }

    printf("The Second Matrix \n");
    for(int i =0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
          printf("%d ",b[i][j]);
        }
        printf("\n");
    }

    printf("The Product Matrix \n");
    for(int i =0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
          printf("%d ",c[i][j]);
        }
        printf("\n");
    }
}