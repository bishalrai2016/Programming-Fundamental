/*
Student Name:Bishal Rai
subject:Programming Fundamental
Roll No:13
Lab Sheet no:22
Program:To print Armstrong number between 1 to 1000.
Date:23/01/2017
*/
#include<stdio.h>
#include<conio.h>
int main()
{
    int i,sum=0,num,r;
    for(i=1;i<=1000;i++)
    {
        num=i;
        sum=0;
        while(num>0)
        {
           r=num%10;
           sum=sum+(r*r*r);
           num=num/10;
        }
        if(i==sum)
        {
            printf("%d\n",i);
        }
    }
        return(0);
        getch();
}





