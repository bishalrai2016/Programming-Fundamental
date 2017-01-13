/*
Student Name:Bishal Rai
Subject:Programming fundamental
Roll no:13
Lab Sheet no:18
Program:To enter any number and print its reverse
Date:13/01/2017
*/
#include<stdio.h>
#include<conio.h>
int main()
{
    int n,r,rev=0;
    printf("Enter any number:");
    scanf("%d",&n);
    while(n>0)
    {
      r=n%10;
      rev=(rev*10)+r;
      n=n/10;

    }
    printf("%d",rev);
    return(0);
    getch();

}
