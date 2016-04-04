#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

long long pivot=0;
int k;

int partition(int ar[],int l, int r)
{
	int p=ar[r];
	int i,j=l-1,temp;
	pivot+=p;
	for(i=l;i<r;i++)
	{
		if(ar[i]<p)
		{
			j++;
			temp=ar[i];
			ar[i]=ar[j];
			ar[j]=temp;
		}
	}
	j++;
	temp=ar[r];
	ar[r]=ar[j];
	ar[j]=temp;

	return j;

}

void quick_sort(int ar[], int l, int r,int ar_size)
{
	if(l<r)
	{
		int p = partition(ar,l,r);

		//printf("p=%d,k=%d,pivot=%lld\n",p,k,pivot);
		if(p==k)
		{
		 printf("%lld",pivot);
		 exit(0);
		}

/*
		int i;
				for(i=0;i<ar_size;i++)
					printf("%d ",ar[i]);

				printf("\n"); */

		if(p>k)
		quick_sort(ar,l,p-1,ar_size);
		else
		quick_sort(ar,p+1,r,ar_size);


	}



}

int main()
{
	int ar_size;
	   scanf("%d", &ar_size);
	   scanf("%d", &k);
	   int ar[ar_size], i;
	   for(i = 0; i < ar_size; i++) {
	      scanf("%d", &ar[i]);
	   }

	   quick_sort(ar,0,ar_size-1,ar_size);
	   printf("%lld",pivot);

    return 0;
}
