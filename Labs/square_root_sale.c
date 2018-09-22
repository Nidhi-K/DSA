#include<stdio.h>
#include<math.h>

long long binary_search(long long n)
{
	long long lo=0,hi=1e9;
	long long mid; 
	while(lo<=hi)
	{	
	 mid=(lo+hi)/2;
	 //printf("%lld %lld %lld\n",mid,lo,hi);
	 if(mid*mid==n)
	 	return mid;
	 else if(mid*mid<=n && (mid+1)*(mid+1)>=n)
	 	return mid+1;
	 else if(mid*mid>n)
	  hi=mid-1;
	 else
	  lo=mid+1;
	}
	return mid+1;
}

int main()
{
	long long n;
	scanf("%lld",&n);
	long long ans= binary_search(n);
	
	printf("%lld\n",ans);
	
	return 0;
}
