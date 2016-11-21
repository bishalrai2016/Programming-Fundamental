/*
Student Name:Bishal Rai
Subject:Programming Fundamental
Roll no:04
Lab sheet no:04
Program:A C program to print area and perimeter of rectangle
Date:21/11/2016
*/
#include<stdio.h>
#include<conio.h>
int main()
{
    float l,b,area,perimeter;
    printf("Enter the length of rectangle\n");
    scanf("%f",&l);
    printf("Enter the breadth of rectangle\n");
    scanf("%f",&b);
    area=l*b;
    perimeter=2*(l+b);
    printf("------------------------------------------------\n");
    printf("The Area of rectangle is %f\n",area);
    printf("------------------------------------------------\n");
    printf("The Perimeter of rectangle is %f\n",perimeter);
    printf("------------------------------------------------\n");
    getch();
    return(0);
}
