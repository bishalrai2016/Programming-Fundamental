/*
Student Name:Bishal Rai
Subject:Programming fundamental
Roll no:13
Lab sheet no:25
Program:To find maximum value in an array containing 10 elements
Date=01/02/2017
*/
#include<stdio.h>
int main()
{
	int num[10],i,max=0;
	for (i=0;i<10;i++)
	{
		printf("Enter a number:");
		scanf("%d",& num[i]);
	}
	for (i=0;i<10;i++)
	{
		if(num[i]>max)
		max=num[i];
	}
	printf("The maximum value in an array is:%d",max);	
	return 0;
}
