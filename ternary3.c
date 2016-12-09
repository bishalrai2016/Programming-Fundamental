/*
Student Name:Bishal Rai
Subject:Programming Fundamental
Roll no:11
Lab sheet no:11
Program:A C program to print largest number among three numbers using terniary operator
Date:09/12/2016
*/
#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b,c;
    printf("Enter the value of first number\n");
    scanf("%d",&a);
    printf("Enter the value of second number\n");
    scanf("%d",&b);
    printf("Enter the value of third number\n");
    scanf("%d",&c);
    (a>b&&a>c)?printf("The Largest number is:%d",a):(b>a&&b>c)?printf("The Largest number is:%d",b):printf("The Largest number is:%d",c);
    getch();
    return(0);
}
