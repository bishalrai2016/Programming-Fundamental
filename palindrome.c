/*
Student Name:Bishal Rai
subject:Programming Fundamental
Roll No:13
Lab Sheet no:21
Program:To find out whether it is palindrome or not.
Date:20/01/2017
*/
#include<stdio.h>
#include<conio.h>
int main()
{
    int n,rev=0,r;
    printf("Enter the number:");
    scanf("%d",&n);
    r=n;
    while(n!=0)
    {
        rev=rev*10;
        rev=rev+n%10;
        n=n/10;
    }
    if(rev==r)
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
