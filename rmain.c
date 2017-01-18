/*
Student Name:Bishal Rai
Subject:Programming Fundamental
Roll No:13
Lab Sheet No:20
Program:To ask radius from user in main() method and pass it to function area() and calculate area of circle in the function and display the result.
Date:18/01/2017
*/
#include<stdio.h>	 
#define pi 3.14
void radius(int r);
int main()
{
   int r;
   printf("Enter the value of radius:");
   scanf("%d",&r);
   radius (r);
   return 0;
}
void radius(int r)
{
   float area;
   area=pi*r*r;
   printf("The Area of circle is %f",area);
}
