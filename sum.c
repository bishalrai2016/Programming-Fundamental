/*
Student Name:Bishal Rai
Subject:Programming Fundamental]
Roll no:04
Lab sheet no:02
Program:Write a C program to print sum of two numbers asked from users
Date:16/11/2016
*/
#include<stdio.h>
#include<conio.h>
int main(){
int a,b,sum;
printf("Enter the first numbers\n");
scanf("%d",&a);
printf("Enter the second number\n");
scanf("%d",&b);

 sum=(a+b);

printf("The sum of two number is %d",sum);
getch();
return(0);
}
