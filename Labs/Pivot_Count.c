#include<bits/stdc++.h>
using namespace std;
//1 4 3 5 7 9 8 10
//max < element < min
int pivot_count(int a[], int n)
{
 int i1,i2; 
 int min=1e9,max=0;
 int pc=0;//pivot count
 
 int b[n];
 
 for(i1=0;i1<n;i1++)
 b[i1]=0; 
 
 for(i1=0;i1<n;i1++)
 {
  //printf("min_index=%d,a[i]=%d\n",min_index,a[i]);
  
  if(a[i1]>=max)
  {
   max=a[i1];
   b[i1]=1;
  }
  
 }
 
 for(i2=n-1;i2>=0;i2--)
 {
  if(a[i2]<=min)
  {
   min=a[i2];
   if(b[i2]==1)
    pc++;   
  }
 } 
  
 return pc;
}

int main()
{
 
   int ar_size;
   
   cin>>ar_size;
   
   int ar[ar_size], i;
   
   for(i = 0; i < ar_size; i++)
   {
      cin>>ar[i];
   }
   
   int ans = pivot_count(ar,ar_size);
   cout<<ans<<'\n';
 
 return 0;
}
