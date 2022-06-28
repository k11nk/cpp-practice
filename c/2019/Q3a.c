#include<iostream>

char Tri(int a, int b, int c)
{
    if(a==b && b==c && c==a)
     {
         printf("Triangle is Equilateral \n");
         break;
     }
    if(a==b&& a!=c)
      {
          if(a)
          printf("Triangle is isoceles \n");
          break;
      }
    if(c==b&& a!=c)
    {
          printf("Triangle is isoceles \n");
          break;
      }
    if(c==a&& b!=c)
    {
          printf("Triangle is isoceles \n");
          break;
      }     
}