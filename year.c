/*
Student Name:Bishal Rai
Subject:Programming Fundamental
Roll no:13
Lab Sheet no:16
Program:A program to check whether year is leap year or not using ternary operator
Date:09/01/2017
*/
#include<stdio.h>
int main()
{
	int a;
	printf("Enter the Year\n");
    scanf("%d",&a);
    (a%4==0&&a%100!=0)?printf("This is a Leap Year"):(a%400==0)?printf("This is a Leap Year"):printf("This is not a Leap Year");
    return(0);
 }   
