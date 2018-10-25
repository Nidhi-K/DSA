#include<bits/stdc++.h>
using namespace std;

vector <int> al[100001];
int v[100001];
int mdist=0;
int dist;
void dfs(int cur,int d)
{
 v[cur]=1;
 
 if(dist<d)
  dist=d;
 // cout<<cur<<" "<<"dist:"<<dist<<endl;
 /*
 if(al[cur].size()<=1 && cur!=0)
 {  
  return;
 }
*/ 
 
 int i;
 
 for(i=0;i<al[cur].size();i++)
 {
  if(v[al[cur][i]]==0)
   dfs(al[cur][i],dist+1);
 }
}

int main()
{
 int n,m;
 cin>>n>>m;
 
 int i,a,b;
 for(i=0;i<m;i++)
 {
  cin>>a>>b;
  al[a].push_back(b);
  al[b].push_back(a);
 }
 if(m==0)
 {
  cout<<1;
  return 0;
 }
 for(i=0;i<n;i++)
 {
  if(v[i]==0)
  {
   dist=0;
   dfs(i,1);
  }
  if(dist>mdist)
  mdist=dist;
 }
 cout<<mdist;
 
 return 0;
}
