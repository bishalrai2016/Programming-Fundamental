/*
Student Name:Bishal Rai
Subject:Programming Fundamental
Roll no:11
Lab sheet no:10
Program:A C program to use of relational operator
Date:05/12/2016
*/
#include<stdio.h>
#include<conio.h>
int main()
{
    float a;
    printf("Enter any number\n");
    scanf("%f",&a);
    if(a>=80&&a<=100)
    {
        printf("First Division with Distinction");
    }
    if(a>=60&&a<80)
    {
        printf("First Division");
    }
    if(a>=45&&a<60)
    {
        printf("Second Division");
    }
    if(a>=35&&a<45)
    {
        printf("Third Division");
    }
    if(a>=0&&a<35)
    {
        printf("Fail");
    }
    if(a>100)
    {
        printf("Invalid");
    }
    getch();
    return(0);
}
