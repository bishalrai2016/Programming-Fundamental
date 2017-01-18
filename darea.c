/*
Student Name:Bishal Rai
Subject:Programming Fundamental
Roll No:13
Lab Sheet No:20
Program:To enter length and breadth and display area of rectangle using function
Date:18/01/2017
*/
#include<stdio.h>
void area();
int main()
{
	area();
	return 0;
}
void area()
{
	int l,b,a;
	printf("Enter the length:");
	scanf("%d",&l);
	printf("Enter the breadth:");
	scanf("%d",&b);
	a=l*b;
	printf("The area of rectangle is:%d",a);
}	
