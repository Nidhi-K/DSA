#include <bits/stdc++.h>

using namespace std;

int a[1213],b[1123],s[1123],r[1123],c[1123];

int main()
{
	int n;
	cin>>n;
	
	for(int i=0;i<n;i++)
	{
		cin>>a[i]>>b[i];
	}
	
	int num1 =0, pos = 0,ci=0;
	int ans=0;
	for(int i=0;i<n;i++)
	{
		if(a[i]>0)
		{
			pos++;
			ans+=a[i];
			c[ci++]=a[i];
		}
		if(b[i]==1) num1++;
	}
	
	if(pos==0)
	{
		int mm = INT_MIN;
		for(int i=0;i<n;i++)
		{
			if(mm<a[i])
			mm=a[i];
		}
		
		int mm2 = INT_MIN;
		for(int i=0;i<n;i++)
		{
			if(mm2<a[i] && mm2!=mm)
			mm2=a[i];
		}
		
		if(num1%2==0)
			cout<<0<<endl;
		else cout<<mm<<endl;
		
		return 0;
	}
	
	int mm = INT_MAX;
	for(int i=0;i<ci;i++)
	{
		if(mm>c[i])
			mm=c[i];
	}
	
	int mn = 
	
	if(pos%2==0 && num1%2==0)
	{
		cout<<ans<<endl;
	}
	else if(pos%2==0 && num1%2!=0)
	{
		cout<<ans-mm<<endl;
	}
	else if(pos%2!=0 && num1%2==0)
	{
		cout<<ans-mm<<endl;
	}
	else if(pos%2!=0 && num1%2!=0)
	{
		cout<<ans<<endl;
	}
	
	
	return 0;
}
