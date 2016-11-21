/*
Student Name:Bishal Rai
Subject:Programming Fundamental
Roll no:04
Lab sheet no:04
Program:A C program to print area of triangle.
Date:21/11/2016
*/
#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
int a,b,c;
float s,E,area;
printf("Enter the first side of triangle\n");
scanf("%d",&a);
printf("Enter the second side of triangle\n");
scanf("%d",&b);
printf("Enter the third side of triangle\n");
scanf("%d",&c);
s=(a+b+c)/2;
E=(s*(s-a)*(s-b)*(s-c));
area=pow(E,0.5);
printf("The Area of triangle is %f",area);
getch();
return(0);
}
