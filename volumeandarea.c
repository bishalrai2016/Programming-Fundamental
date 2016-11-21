/*
Student Name:Bishal Rai
Subject:Programming Fundamental
Roll no:04
Lab sheet no:04
Program:A C program to print area and volume of sphere
Date:21/11/2016
*/
#include<stdio.h>
#include<conio.h>
#include<math.h>
#define PI 3.14
int main()
{
    float r,area,volume;
    printf("Enter the radius of sphere\n");
    scanf("%f",&r);
    area=4*PI*pow(r,2);
    volume=1.33*PI*pow(r,3);
    printf("----------------------------------------------\n");
    printf("The Area of Sphere is %f\n",area);
    printf("----------------------------------------------\n");
    printf("The Volume of Sphere is %f\n",volume);
    printf("----------------------------------------------\n");
    getch();
    return(0);
}
