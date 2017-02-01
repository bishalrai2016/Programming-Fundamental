/*
Student Name:Bishal Rai
Subject:Programming fundamental
Roll no:13
Lab sheet no:25
Program:To find sum of elements of an array containing 10 elements
Date=01/02/2017
*/
#include<stdio.h>
int main()
{
	int num[10],i,sum=0;
	for (i=0;i<10;i++)
	{
		printf("Enter a number:");
		scanf("%d",& num[i]);
	}
	for (i=0;i<10;i++)
	{
		sum=sum+num[i];
	}
	printf("The Sum of elements of array:%d",sum);	
	return 0;
}
