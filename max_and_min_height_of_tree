#include<bits/stdc++.h>
using namespace std;

int n,r;
vector <int> adjlist[100001];
int  max_height=0,min_height=100001;


void dfs(int current,int parent,int d)
{ 
 if(adjlist[current].size()<=2)
 {
    max_height=max(max_height,d);
    min_height=min(min_height,d);
 } 	
 for(int i=1;i<adjlist[current].size();i++)
 {
 	if(adjlist[current][i]!=parent)
 	{
 		dfs(adjlist[current][i],current,d+1);
 	} 		
 }
}

int main()
{
 cin>>n>>r;
 int i,a,b,j;
 
 for(i=1;i<=(n-1);i++) 	
 	adjlist[i].push_back(0);
 	
 for(i=1;i<=(n-1);i++)
 {
 	cin>>a>>b;
 	adjlist[a].push_back(b);
 	adjlist[b].push_back(a);
 }

 dfs(r,0,1);
 cout<<max_height<<" "<<min_height<<endl;
 
 return 0;
}
