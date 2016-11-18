/*
Student Name:Bishal Rai
Subject:Programming Fundamental
Roll no:04
Lab sheet no:03
Program:A C program to calculate area and circumference of circle having radius r.r should taken from user
Date:18/11/2016
*/
#include<stdio.h>
#include<conio.h>
#define PI 3.14
int main()
{
    float r,area,cir;
    printf("Enter the radius:\n");
    scanf("%f",&r);
    area=PI*r*r;
    cir=2*PI*r;
    printf("----------------------------------------\n");
    printf("The Area of circle is %f\n",area);
    printf("----------------------------------------\n");
    printf("The Circumference of cicle is %f\n",cir);
    printf("*****************************************");
    getch();
    return(0);
}
