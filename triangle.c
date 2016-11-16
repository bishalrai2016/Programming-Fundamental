/*
Student Name:Bishal Rai
Subject:Programming Fundamental
Roll no:04
Lab sheet no:02
Program:Write a C program to print area of traingle,base & height are asked from users
Date:16/11/2016
*/
#include<stdio.h>
#include<conio.h>
int main()
{
float b,h,area;
printf("Enter the value of base of triangle:\n");
scanf("%f",&b);
printf("Enter the value of height of triangle:\n");
scanf("%f",&h);
area=0.5*b*h;
printf("The area of triangle is: %f",area);
getch();
return(0);
}
