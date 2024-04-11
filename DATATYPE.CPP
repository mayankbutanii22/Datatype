#include<stdio.h>
#include<conio.h>
main()
{
int num1,num2,sum;
clrscr();
num1=12;
num2=6;
sum=num1+num2;
printf("Addition of %d and %d is %d\n\n",num1,num2,sum);
sum=num1-num2;
printf("Subtraction of %d and %d is %d\n\n",num1,num2,sum);
sum=num1*num2;
printf("Multiplication of %d and %d is %d\n\n",num1,num2,sum);
sum=num1/num2;
printf("Division of %d and %d is %d\n\n",num1,num2,sum);
sum=num1%num2;
printf("Modulo of %d and %d is %d\n\n",num1,num2,sum);
sum=num1+num2;
printf("%d+%d=%d\n\n",num1,num2,sum);
sum=num1-num2;
printf("%d-%d=%d\n\n",num1,num2,sum);
sum=num1*num2;
printf("%d*%d=%d\n\n",num1,num2,sum);
sum=num1/num2;
printf("%d/%d=%d\n\n",num1,num2,sum);
sum=num1%num2;
printf("%d %d=%d",num1,num2,sum);
getch();
}