/*
Student Name:Bishal Rai
subject:Programming Fundamental
Roll No:13
Lab Sheet no:21
Program:To display output *
                          **
                          ***
                          ****
                          *****
Date:20/01/2017
*/
#include<stdio.h>
#include<conio.h>
int main()
{
    int i,j;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("*");
        }
    printf("\n");
    }
    getch();
    return(0);
}

