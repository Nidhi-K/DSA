#include<stdio.h>

long long mod(long long a,long long b,long long m)
{
 long long a1,a2;

 if(b==1)
 {
	 return a%m;
 }

 if(b%2==0)
 {
	a1=a2= mod(a,b/2,m);
 }
 else
 {
	 a1=mod(a,b/2,m);
	 a2=mod(a,b/2 +1,m);
 }

 return ((a1%m)*(a2%m))%m;
}

int main()
{
 long long a,b,m=1000000007,r,i,k;
 scanf("%lld %lld",&a,&b);

 r=mod(a,b,m);

 printf("%lld",r);
 return 0;
}
