#include<stdio.h>
int main()
{
int year;
scanf("%d",&year);
if(year%400==0)
printf("Yes");
else if(year%4==0)
printf("yes");
else if(year%100)
printf("No");
else
printf("No");
return 0;
}

