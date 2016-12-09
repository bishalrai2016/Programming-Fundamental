/*
Student Name:Bishal Rai
Subject:Programming Fundamental
Roll no:11
Lab sheet no:11
Program:A C program to print check odd/even number ternary operator
Date:09/12/2016
*/
#include<stdio.h>
#include<conio.h>
int main()
{
    int n;
    printf("Enter the value of first number\n");
    scanf("%d",&n);
    (n%2==0)?printf("The number is even"):printf("The number is odd");
    getch();
    return(0);
}
