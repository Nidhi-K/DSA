#include<stdio.h>

void merge_sort(int beg,int end,int a[]);
void merge(int *a,int a_beg, int a_end, int b_beg, int b_end);

long long int inv = 0;//number of inversions
int main()
{
 int n,i;

 scanf("%d",&n);
 int a[n];

 for(i=0;i<n;i++)
 scanf("%d",&a[i]);

 merge_sort(0,n-1,a);
 
 printf("%lld",inv);
 return 0;

}

void merge_sort(int beg,int end,int a[])
{

if(beg<end)
{
merge_sort(beg,(beg+end)/2, a);
merge_sort((beg+end)/2 +1,end, a);
merge(a,beg,(beg+end)/2,(beg+end)/2 +1,end);

}
}

void merge(int *a,int a_beg, int a_end, int b_beg, int b_end)
{

 /*
 int i1;

 printf("array a:");
 for(i1=a_beg;i1<=a_end;i1++)
  printf("%d ",a[i1]);

 printf("\n");

 printf("array b:");
 for(i1=b_beg;i1<=b_end;i1++)
  printf("%d ",a[i1]);

 printf("\n");
 */

 int n=(a_end-a_beg+1)+(b_end-b_beg+1);
 int c[n],count_a=a_beg,count_b=b_beg,count_c=0;


 while(count_a<=a_end &&count_b<=b_end)
 {
  if(a[count_a]<=a[count_b])
  {
    c[count_c++]=a[count_a++];    
  }
  else
  {    
    c[count_c++]=a[count_b++];   
      inv+=a_end-count_a+1;
  }
 }
  
  while(count_a<=a_end)
  {
   c[count_c++]=a[count_a++];   
  }  
  
  while(count_b<=b_end)
   c[count_c++]=a[count_b++];

 int i,j=0;

 for(i=a_beg;i<=b_end;i++,j++)
  {
	a[i]=c[j];
  }
 
}
