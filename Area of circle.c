#include<stdio.h>
int main()
{
    float PI,radius,area;
    printf("Enter the radius of the circle:");
    scanf("%f",&radius);
    printf("Enter PI:");
    scanf("%f",&PI);
    area=PI*radius*radius;
    printf(" The Area of the circleis  %.2f",area);
}

