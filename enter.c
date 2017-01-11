/*
Student Name:Bishal Rai
Subject:Programming Fundamental
Roll no:13
Lab Sheet no:17
Program:A program to enter 4 digit number and 
                   1-display the result by dividind the number by 10
                   2-divide it by another number asked from user
                   3-display the remainder by dividing number by 10
Date:/01/2017
*/
#include<stdio.h>
int main()
{
	int a,div,b,di,d;
	printf("Enter a four digit number:");
	scanf("%d",&a);
	div=a/10;
	printf("The dividend is :%d\n",div);
	printf("Enter the second number:");
	scanf("%d",&b);
	di=div/b;
	printf("The devidend is :%d\n",di);
	d=di%10;
	printf("The remainder is :%d",d);
	return(0);
}	
	
