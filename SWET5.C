//Write a programme to find the formula answer (x+y)*3.

#include<stdio.h>
#include<conio.h>

void main(){
int x,y,z;
clrscr();
printf("Enter value of first digit : ",x);
scanf("%d",&x);
printf("Enter value of second  digit : ",y);
scanf("%d",&y);
z=(x+y)*3;
printf("The answer is - %d",z);

getch();
}