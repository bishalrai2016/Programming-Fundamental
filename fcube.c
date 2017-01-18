/*
Student Name:Bishal Rai
Subject:Programming Fundamental
Roll No:13
Lab Sheet No:20
Program:To find cube of any number using function
Date:18/01/2017
*/
#include <stdio.h>

void cube();

int main()
{
	cube();
	return 0;
}
void cube()
{
int n,result;

printf("Enter any number:");
scanf("%d",&n);
result=n*n*n;
printf("Cube of value is=%d",result);
}

 
