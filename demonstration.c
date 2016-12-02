/*
Student Name:Bishal Rai
Subject:Programming Fundamental
Roll no:11
Lab Sheet no:09
Program:To demonstration the working of increment and decrement operators
Date:2/12/2016
*/
#include<stdio.h>
#include<conio.h>
int main()
{
    int a;
    printf("Enter the number\n");
    scanf("%d",&a);
    printf("The post increment is: %d\n",a++);
    printf("The pre increment is: %d\n",++a);
    printf("The post decrement is: %d\n",a--);
    printf("The pre decrement is: %d\n",--a);
    getch();
    return(0);
}
