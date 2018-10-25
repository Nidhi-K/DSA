#include<bits/stdc++.h>
using namespace std;

int n,m,a,b,source;
vector <pair<int,int> > graph[112345];
priority_queue<pair <int,int> >pq;
int d[112345];
int sa[112345],sb[112345];

int main()
{
	int i,u,v,w;
	
	cin>>n>>m>>a>>b;
	
	for(i=0;i<a;i++)
		cin>>sa[i];
	
	for(i=0;i<b;i++)
		cin>>sb[i];
	
	for(i=0;i<m;i++)
	{
		cin>>u>>v>>w;
		graph[u].push_back(make_pair(w,v));
		graph[v].push_back(make_pair(w,u));
	}
	
	//1
	for(i=0;i<n+5;i++)
		d[i]=-1;
	
	source=0;
	
	pq.push(make_pair(0,source));
	
	pair<int,int> tp;
	
	int min_dist,node;
	
	while(!pq.empty())
	{
		tp=pq.top();
		pq.pop();
		min_dist=-tp.first;
		node=tp.second;
		if(d[node]==-1)
		{
			d[node]=min_dist;
			for(auto child:graph[node])
			{
				if(d[child.second]==-1)
					pq.push(make_pair(-(child.first+min_dist),child.second));
			}
		}		
	}

	//for(i=0;i<n+3;i++)
	//	cout<<i<<":"<<d[i]<<" ";
	//cout<<endl;
	
	for(i=0;i<a;i++)
		graph[n].push_back(make_pair(d[sa[i]],sa[i]));
	
	//2
	for(i=0;i<n+5;i++)
		d[i]=-1;
	
	source=n;
	
	pq.push(make_pair(0,source));
	
	
	while(!pq.empty())
	{
		tp=pq.top();
		pq.pop();
		min_dist=-tp.first;
		node=tp.second;
		if(d[node]==-1)
		{
			d[node]=min_dist;
			for(auto child:graph[node])
			{
				if(d[child.second]==-1)
					pq.push(make_pair(-(child.first+min_dist),child.second));
			}
		}		
	}
	
	//for(i=0;i<n+3;i++)
	//	cout<<i<<":"<<d[i]<<" ";
	//cout<<endl;
	
	for(i=0;i<b;i++)
		graph[n+1].push_back(make_pair(d[sb[i]],sb[i]));
	
	//3	
	for(i=0;i<n+5;i++)
		d[i]=-1;
	
	source=n+1;
	
	pq.push(make_pair(0,source));
	
	
	while(!pq.empty())
	{
		tp=pq.top();
		pq.pop();
		min_dist=-tp.first;
		node=tp.second;
		if(d[node]==-1)
		{
			d[node]=min_dist;
			for(auto child:graph[node])
			{
				if(d[child.second]==-1)
					pq.push(make_pair(-(child.first+min_dist),child.second));
			}
		}		
	}
	
	//for(i=0;i<n+3;i++)
	//	cout<<i<<":"<<d[i]<<" ";
	//cout<<endl;
	
	cout<<d[n-1]<<endl;
}
