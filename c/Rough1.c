#include<stdio.h>
int main()
{
int n,i,j,k;
printf("Enter a no.");
scanf("%d",&n);
for( i=n;i>=1;i--)
{
for(j=n;j>=1;j--)
{
if(i>=j)
printf("%d",i);
else
printf("%d",j);
}
for(k=2;k<=n;k++)
{
if(i>=k)
printf("%d",i);
else
printf("%d",k);
}
printf("\n");
}
for( i=2;i<=n;i++)
{
for(j=n;j>=1;j--)
{
if(i>=j)
printf("%d",i);
else
printf("%d",j);
}
for(k=2;k<=n;k++)
{
if(i>=k)
printf("%d",i);
else
printf("%d",k);
}
printf("\n");
}
return 0;
}