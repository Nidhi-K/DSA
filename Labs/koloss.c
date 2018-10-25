#include<stdio.h>

void merge(int *a,int a_beg, int a_end, int b_beg, int b_end)
{
 //printf("\na_beg=%d,a_end=%d,b_beg=%d,b_end=%d\n", a_beg, a_end,  b_beg, b_end);
 int n=(a_end-a_beg+1)+(b_end-b_beg+1);
 int c[n],count_a=a_beg,count_b=b_beg,count_c=0;
 while(count_a<=a_end &&count_b<=b_end)
 {
  if(a[count_a]<=a[count_b])
   c[count_c++]=a[count_a++];
  else if(a[count_a]>=a[count_b])
   c[count_c++]=a[count_b++];
 }
  while(count_a<=a_end)
   c[count_c++]=a[count_a++];
  while(count_b<=b_end)
   c[count_c++]=a[count_b++];

 int i,j=0;
// for(i=0;i<n;i++)
  //printf("%d ",c[i]);
 //printf("\n");
 for(i=a_beg;i<=b_end;i++,j++)
  {

a[i]=c[j];
  }
 //for(i=0;i<n;i++)
 //  printf("%d ",a[i]);
  //printf("\n");
 //return c;
}


void merge_sort(int beg,int end,int a[])
{
//int c=0;
if(beg<end)
{
merge_sort(beg,(beg+end)/2, a);
merge_sort((beg+end)/2 +1,end, a);
merge(a,beg,(beg+end)/2,(beg+end)/2 +1,end);
//c++;
//printf("\nc= %d",c);
}
}

long long int triangle(int a[], int n)
{
 long long int i,j,sum;
 long long int lo,hi,mid;
 long long int ans=0;
 
 for(i=0;i<n-2;i++)
 {
  for(j=i+1;j<n-1;j++)
  {
  	sum=a[i]+a[j];
  	//BINARY SEARCH
  	lo=j+1;hi=n-1;  /////////////////////	
  	while(lo<hi)
  	{
  	 mid=(lo+hi)/2;
  	 if(a[mid]<=sum)
  	 	lo=mid+1;
  	 else
  	 	hi=mid;
  	}
  	while(a[lo]>=sum)
  		lo--;
  	
  	ans+=lo-j;
  	
  	//printf("%d %d,ans=%lld\n",a[i],a[j],ans);
  }
  
 }
 return ans;
}

int main()
{
 int n,i;
 scanf("%d",&n);
 int a[n];
 for(i=0;i<n;i++)
 	scanf("%d",&a[i]);
 
 merge_sort(0,n-1,a);
 
 /*
 for(i=0;i<n;i++)
 printf("%d ",a[i]);	
 */
 
 long long int ans = triangle(a,n);
 printf("%lld\n",ans);
 
 return 0;
}



