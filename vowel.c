#include<stdio.h>
int main()
{
char a;
scanf("%c",&a);
if((a>=67)&&(a<=90)||(a>=97)&&(a<=122))
{
if(a==65||a==97||a==69||a==101||a==73||a==105||a==97||a==111||a==85||a==117)
printf("Vowel");
else
printf("Consonant");
}
else
{
printf("Invalid");
}
return 0;
}
