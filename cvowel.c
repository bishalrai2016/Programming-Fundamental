/*
Student Name:Bishal Rai
Subject:Programming fundamental
Roll no:11
Lab sheet no:14
Program:A C program to check character assigned from user is vowel or not.
Date:21/12/2016
*/
#include<stdio.h>
int main()
{
char a;
printf("Enter any character\n");
scanf("%c",&a);
if(a=='a'||a=='e'||a=='i'||a=='o'||a=='u'||a=='A'||a=='E'||a=='I'||a=='O'||a=='U')
{
	printf("%c is vowel",a);
}
else
{
	printf("%c is not vowel",a);
}		
return(0);
} 
