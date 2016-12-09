/*
Student Name:Bishal Rai
Subject:Programming Fundamental
Roll no:11
Lab sheet no:11
Program:A C program to print largest number among two numbers using terniary operator
Date:09/12/2016
*/
#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b;
    printf("Enter the value of first number\n");
    scanf("%d",&a);
    printf("Enter the value of second number\n");
    scanf("%d",&b);
    (a>b)?printf("The Largest number is:%d",a):printf("The Largest number is:%d",b);
    getch();
    return(0);
}

