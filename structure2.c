/*
Student Name:Bishal Rai
Subject:Programming Fundamental
Roll no:13
Lab Sheet no:26
Program:To declare a struct with 3 float value and assign value to them in main method and perform multiplication in a function multiply() passing structure data as argument.                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                       
Date:06/02/2017
*/
#include<stdio.h>
struct multiplication
{
	float a,b,c;
};
void multiply(float x,float y,float z);
int main()
{
	struct multiplication mul;
	printf("Enter a number");
	scanf("%f",&mul.a);
	printf("Enter another number");
	scanf("%f",&mul.b);
	printf("Enter third number");
	scanf("%f",&mul.c);
	multiply(mul.a,mul.b,mul.c);
	return 0;
}
void multiply(float x,float y,float z)
{
	float result;
	result=x*y*z;
	printf("The multiplication result is %f",result);
}			
