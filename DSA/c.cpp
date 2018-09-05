#include <bits/stdc++.h>

using namespace std;

vector <int> g[112];

#define pb push_back

int md=0,b;
int dfs(int node, int d,vector <int> g[])
{
	int cd =0;
	for(int i=0;i<g[node].size();i++)
	{
		if(g[node][i]!=node)
			cd = max(cd,dfs(g[node][i],d+1));
	}
	
	if(d+cd>md)
	{
		md = d + cd;
		b = node;
	}
	
	return d+cd;
	
}

int longest_path(vector <int> g[],int node)
{
	
	dfs(node,0,g);
	md=0;
	dfs(b,0,g);
	
	return md;
}

int main()
{
	int n;
	cin>>n;
	for(int i=0;i<(n-1);i++)
	{
		int a,b;
		cin>>a>>b;
		g[a].pb(b);
		g[b].pb(a);		
	}
	
	int f=0;
	
	for(int node=0;node<n;node++)
	{
	
		for(int j=0;j<g[node].size();j++)
		{
			int temp = g[node][j];
			g[node].remove(temp);
			g[temp].remove(node);
		
			int l1 = longest_path(g,node);
		
			int l2 = longest_path(g,temp);
		
			if(l1 <=k && l2 <=k)
			{
				f=1;
				break;				
			}
			
			g[node].pb(temp);
			g[temp].pb(node);
		}
		
		if(f) break;
	}	
	
	if(f) cout<<"y\n";
	else cout<<"n\n";
	
	return 0;
}
