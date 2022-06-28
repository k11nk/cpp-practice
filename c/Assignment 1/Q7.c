#include<stdio.h>
#include<stdlib.h>

int main()
{
    float height,weight;
    printf("Enter your height in meteres \n");
    scanf("%f",&height);
    printf("Enter your weight in kilograms \n");
    scanf("%f",&weight);
    printf("BMI of the user is %f",weight/(height*height));
    printf("From the Department of Health and Human Services/National Institutes of Health \n");
    printf("BMI Values: \n Underweight:less than 18.5 \n Normal:Between 18.5 and 24.9 \n Overweight:Between 25 and 29.9 \n Obese:30 or greater \n");
    }