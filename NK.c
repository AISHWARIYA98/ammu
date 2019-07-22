#include<stdio.h>
int main()
{
int N,K,sum=0;
scanf("%d %d",&N,&K);
int A[N];
for(int i=0;i<N;i++)
{
scanf("%d",&A[i]);
}
for(int i=0;i<K;i++)
{
sum=sum+A[i];
}
return 0;
}


