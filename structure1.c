/*
Student Name:Bishal Rai
Subject:Programming Fundamental
Roll no:13
Lab Sheet no:26
Program:To create a structure with two integer number and call the structure in main method and add both integer value and display the result 
Date:06/02/2017
*/
#include<stdio.h>
struct addition
{
	int num1;
	int num2;
};
int main()
{
	int result;
	struct addition add;
	printf("Enter a number");
	scanf("%d",&add.num1);
	printf("Enter another number");
	scanf("%d",&add.num2);
	result=add.num1+add.num2;
	printf("The Sum of two number is %d",result);
	return 0;
}	 	
