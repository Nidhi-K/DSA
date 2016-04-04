#include<bits/stdc++.h>
using namespace std;

vector <int> graph[112345];
int v[112345];
int d[112345];
int ans;
queue <int> q;

int main()
{
	int i,n,m,a,b,c;
	cin>>n;
	m=n-1;
	for(i=0;i<m;i++)
	{
		cin>>a>>b;
		graph[a].push_back(b);
		graph[b].push_back(a);
	}
	
	q.push(1);
	d[1]=0;
	
	while(!q.empty())
	{
		c=q.front();
		v[c]=1;
		q.pop();
		for(i=0;i<graph[c].size();i++)
		{
			if(!v[graph[c][i]])
			{
				q.push(graph[c][i]);
				d[graph[c][i]]=d[c]+1;
			}
		}
		
	}
	
	//for(i=1;i<=n;i++)
	//	cout<<i<<":"<<d[i]<<" ";
	int md=0;
	for(i=1;i<=n;i++)
	{
	 if(md<d[i])
	 	md=d[i];
	}
	int x[md+2];
	
	for(i=0;i<=md;i++)
		x[i]=0;
		
	for(i=1;i<=n;i++)
	{
		x[d[i]]=x[d[i]]^i;
	}
	for(i=0;i<=md;i++)
		ans+=x[i];
	
	cout<<ans<<endl;
	
	return 0;
}
