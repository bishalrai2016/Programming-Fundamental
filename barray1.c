/*
Student Name:Bishal Rai
Subject:Programming fundamental
Roll no:13
Lab sheet no:25
Program:To declare array and ask the user to input value
Date=01/02/2017
*/
#include<stdio.h>
int main()
{
	int num[10],i;
	for (i=0;i<10;i++)
	{
		printf("Enter a number:");
		scanf("%d",& num[i]);
	}
	for (i=0;i<10;i++)
	{
		printf("num[%d] contains %d data",i,num[i]);
	}
	return 0;
}
