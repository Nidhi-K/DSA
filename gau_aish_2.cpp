#include<bits/stdc++.h>
using namespace std;

vector <int> al[100001];
int v[100001];

void dfs(int cur)
{
 v[cur]=1;
 int i;
 for(i=0;i<al[cur].size();i++)
 {
  if(v[al[cur][i]]==0)
   dfs(al[cur][i]);
 }
}

int main()
{
 int n,m;
 cin>>n>>m;
 if(m!=n-1)
 {
  cout<<"NO";
  return 0;
 }
 int i,a,b;
 for(i=0;i<m;i++)
 {
  cin>>a>>b;
  al[a].push_back(b);
  al[b].push_back(a);
 }
 dfs(0);
 for(i=0;i<n;i++)
 {
  if(v[i]==0)
  {
   cout<<"NO";
   return 0;
  }
 }
  cout<<"YES";
 return 0;
}
