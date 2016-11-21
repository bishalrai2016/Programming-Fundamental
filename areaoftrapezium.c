/*
Student Name:Bishal Rai
Subject:Programming Fundamental
Roll no:04
Lab sheet no:04
Program:A C program to print area of trapezium of triangle
Date:21/11/2016
*/
#include<stdio.h>
#include<conio.h>
int main()
{
float a,b,h,Area;
printf("Enter the first side of triangle\n");
scanf("%f",&a);
printf("Enter the second side of triangle\n");
scanf("%f",&b);
printf("Enter the height of triangle\n");
scanf("%f",&h);
Area=0.5*(a+b)*h;
printf("The Area of Trapezium of triangle is %f",Area);
getch();
return(0);
}
