//Dijkstra
#include<bits/stdc++.h>
using namespace std;

int n,m,source;
vector <pair<int,int> > graph[112345];
priority_queue <pair<int,int> > pq;
int d[112345];

int main()
{
    int i,a,b;
   
    cin>>n>>m;
    for(i=0;i<m;i++)
    {
        cin>>a>>b;
        graph[a].push_back(make_pair(0,b));
        graph[b].push_back(make_pair(1,a));       
    }
   
    for(i=0;i<n;i++)
        d[i]=-1;
       
    source=0;
    pq.push(make_pair(0,source));
   
    pair<int,int> tp;
    int min_dist,node;
   
    while(!pq.empty())
    {
        tp=pq.top();
        pq.pop();
        min_dist=-tp.first;//we have stored the distances as negative in the priority queue
        node=tp.second;
       
        if(d[node]==-1)
        {
            d[node]=min_dist;
            for(auto child:graph[node])
            {
                pq.push(make_pair(-(child.first+min_dist),child.second));
               
            }
        }           
    }
   
   // for(i=0;i<n;i++)
   //     cout<<i<<":"<<d[i]<<" ";
   cout<<d[n-1];
    cout<<endl;
}
