#include<stdio.h>
#include<conio.h>
int main()
{
int a=1,b=2,c;
clrscr();
printf("the value of a= %d\n",a);
printf("the value of b= %d\n",b);
c=a;
a=b;
b=c;
printf("after swaping the value of a,b\n");
printf("the of value  a = %d\nthe value of b= %d\n",a,b);

getch();
}