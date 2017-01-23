/*
Student Name:Bishal Rai
Subject:Programming Fundamental
Roll No:13
Lab Sheet no:22
Program:To check whether the entered number is prime or not.
Date:23/01/2017
*/
#include<stdio.h>
#include<conio.h>
int main()
{
    int n,i,count=0;
    printf("Enter a number:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        count++;
    }
    if(count==2)
    {
        printf("The number is prime");
    }
    else
    {
        printf("The number is not prime");
    }
    return(0);
    getch();
}
