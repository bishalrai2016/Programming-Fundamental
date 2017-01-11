/*
Student Name:Bishal Rai
Subject:Programming Fundamental
Roll no:13
Lab Sheet no:17
Program:A program to find first and last digit of any number of 4 digit number using for loop
Date:/01/2017
*/
#include<stdio.h>
int main()
{
	int a,i,l;
	printf("Enter 4 digit number:");
	scanf("%d",&a);
	l=a%10;
	printf("The last number is:%d\n",l);
	for(i=1;i<4;i++)
	{
		a=a/10;
	}
	printf("The first number is:%d",a);
	return(0);	
}
