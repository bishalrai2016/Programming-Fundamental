/*
Student Name:Bishal Rai
Subject:Programming Fundamental
Roll no:13
Lab Sheet no:17
Program:A program to find first and last digit of any number of using whole loop
Date:/01/2017
*/
#include<stdio.h>
int main()
{
	int a,l;
	printf("Enter any number:");
	scanf("%d",&a);
	l=a%10;
	printf("The last number is:%d\n",l);
	while(a>=10)
	{
		a=a/10;
		
	}
	printf("The first number is:%d",a);
	return(0);
}



		
	
