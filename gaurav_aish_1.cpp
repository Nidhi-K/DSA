//============================================================================
// Name        : cpp.cpp
// Author      : 
// Version     :
// Copyright   : 
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

vector <int> al[100001];
int n2,dia=0;

void dfs(int cur, int par, int d)
{
	int i;
	if(al[cur].size()<=1)
	{
		if(dia<d)
		{
			dia=d;
			n2=cur;
		}
	}
	for(i=0;i<al[cur].size();i++)
	{
		if(al[cur][i]!=par)
			dfs(al[cur][i],cur,d+1);
	}
}

int main()
{
	int n,m;
		cin>>n;
    /*
		if(m!=n-1)
		{
			cout<<"NO";
			return 0;
		}
    */
		int i,a,b,j;
		for(i=0;i<n-1;i++)
		{
			cin>>a>>b;
			al[a].push_back(b);
			al[b].push_back(a);
		}

		dfs(0,-1,0);
		dfs(n2,-1,0);
		cout<<dia;
    /*
		if(dia==m)
			cout<<"YES";
		else
			cout<<"NO";
    */
	return 0;
}

