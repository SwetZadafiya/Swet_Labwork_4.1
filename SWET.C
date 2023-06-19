//Write a Programme to Swap two variables using the third variable.

#include<stdio.h>
#include<conio.h>

void main(){
int a;
int b;
int c;

clrscr();

printf("Enter value of first variable : ",a);
scanf("%d",&a);
printf("Enter value of second variable : ",b);
scanf("%d",&b);
c=a;
a=b;
b=c;
printf("valuse of variables after swaping is - %d and %d ",a,b);

getch();
}