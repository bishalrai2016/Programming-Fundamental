/*
Student Name:Bishal Rai
Subject:Programming fundamental
Roll no:04
Lab sheet no:02
Program:To print product & sum of three no. asked from user.
Date:16/11/2016
*/
#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b,c,pro,sum;
    printf("Enter the first number:\n");
    scanf("%d",&a);
    printf("Enter the second number:\n");
    scanf("%d",&b);
    printf("Enter the third number:\n");
    scanf("%d",&c);
    pro=(a*b*c);
    sum=(a+b+c);
    printf("The product of three number is:%d\n",pro);
    printf("The sum of three number is:%d\n",sum);
    getch();
    return(0);
}
