/*
Student Name:Bishal Rai
Subject:Programming fundamental
Roll no:13
Lab Sheet no:18
Program:To enter any number and check whether the value is palindrome or not
Date:13/01/2017
*/
#include<stdio.h>
#include<conio.h>
int main()
{
    int a,r,num,rev=0;
    printf("Enter the number:");
    scanf("%d",&a);
    num=a;
    while(a>0)
    {
        r=a%10;
        rev=rev*10+r;
        a=a/10;
    }
    printf("The reverse value is:%d\n",rev);
    if(num==rev)
    {
       printf("It is palindrome");
    }
    else
    {
        printf("It is not palindrome");
    }

    return(0);
    getch();
}
