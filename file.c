/*
Student Name:Bishal Rai
Subject:Programming fundamental
Roll no:09
Lab sheet no:26
Program:to create a file and insert data to it.
Date:21/12/2016/
*/
#include<stdio.h>
int main()
{
    FILE*fp;
    fp=fopen("E:/Sunway/test.txt","w");
    fprintf(fp,"This data is saved to file\n");
    fputs("This is another line in the file",fp);
    fclose(fp);
    return (0);
}
