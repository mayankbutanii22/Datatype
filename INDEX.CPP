#include<stdio.h>
#include<conio.h>
#define PI 3.14

main()
{
int r;
float area;
clrscr();
printf("Enter a radius value: ");
scanf("%d",&r);
printf("%d",r);
area=PI*r*r;
printf("Area of circle is %.2f",area);
getch();
}
