/*
Student Name:Bishal Rai
Subject:Programming Fundamental
Roll no:04
Lab sheet no:03
Program:A C program to print simple interest(I=PTR/100)
Date:18/11/2016
*/
#include<stdio.h>
#include<conio.h>
int main()
{
float p,t,r,I;
printf("Enter the principal\n");
scanf("%f",&p);
printf("Enter the time\n");
scanf("%f",&t);
printf("Enter the rate\n");
scanf("%f",&r);
I=p*t*r/100;
printf("The simple interest is %f",I);
getch();
return(0);
}
