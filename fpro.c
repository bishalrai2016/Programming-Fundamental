/*
Student Name:Bishal Rai
Subject:Programming Fundamental
Roll no:13
Lab Sheet no:18
Program:To Calculate product of digits of any number using for loop
Date:13/01/2017
*/
#include<stdio.h>
int main()
{
	int i,a,rem,pro=1;
	printf("Enter any number:");
	scanf("%d",&a);
		
		for(i=0;a!=0;i++)
		{
			rem=a%10;
			pro=pro*rem;
			a=a/10;
		
		}	
	printf("The Product of the digit is : %d ",pro);
	return 0;
}		
