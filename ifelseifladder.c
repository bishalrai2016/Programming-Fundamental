/*
Student Name:Bishal Rai
Subject:Programming Fundamental
Roll no:11
Lab sheet no:11
Program:A C program to print largest number among three numbers using if else if ladder
Date:09/12/2016
*/
#include<stdio.h>
#include<conio.h>
int main ()
{
    int a,b,c;
    printf("Enter the value of first number\n");
    scanf("%d",&a);
    printf("Enter the value of second number\n");
    scanf("%d",&b);
    printf("Enter the value of third number\n");
    scanf("%d",&c);
    if(a>b&&a>c)
    {
        printf("The value of A is greater than others");
    }
    else if (b>a&&b>c)
    {
        printf("The value of B is greater than others");
    }
    else
    {
        printf("The value of C is greater than others");
    }
    getch();
    return(0);
}
