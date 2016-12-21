/*
Student Name:Bishal Rai
Subject:Programming fundamental
Roll no:11
Lab sheet no:14
Program:A C program to check character assigned from user is alphabet or not.
Date:21/12/2016
*/
#include<stdio.h>
int main()
{
char c;
int ascii;
printf("Enter any character\n");
scanf("%c",&c);
ascii=c;
if(ascii>=65&&ascii<=90||ascii>=97&&ascii<=122)
{
	printf("The Character is an alphabet");
}
else
{
	printf("The Character is not an alphabet");
}
return(0);
}			  

