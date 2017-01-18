/*
Student Name:Bishal Rai
Subject:Programming Fundamental
Roll no:13
Lab Sheet no:18
Program:To Calculate sum of digits of any number using while loop
Date:13/01/2017
*/
#include<stdio.h>
int main()
{
	int a,rem,sum=0;
	printf("Enter any number:");
	scanf("%d",&a);
	while(a>0)
	{
		rem=a%10;
		sum=sum+rem;
		a=a/10;
	}
	printf("The Sum is :%d",sum);
	return(0);
}	 	
	 
		
