#include<stdio.h>
#include<math.h>

void insertionSort(int a[],int n)
	{
		for(int i=1;i<n;i++)
		{
			int value=a[i];
			int hole=i;
			while(hole>0 && a[hole-1]>value)
			{
				a[hole]=a[hole-1];
				hole=hole-1;	
			}
			a[hole]=value;
	}
}
int BinarySearch(int a[],int h,int l,int x,int n)
{
	l=0;
	h=n-1;
	if(l<=h)
	{
		int mid=(l+h)/2;
		if(a[mid]==x)
			{
				return mid;
			}
		else if(x<a[mid])
			{
				return BinarySearch(a,mid-1,l,x,n);
			}
		else
			{
				return BinarySearch(a,h,mid+1,x,n);
			}
			
	}
	return -1;
}
int main(void)
{
	int a[]={5,3,7,1,2};
	int n = sizeof(a) / sizeof(a[0]); 
	int x=1;
	insertionSort(a, n);
	for(int i=0;i<n;i++)
	{	
		printf("%d", a[i]);
	printf("\t");
	}
	int result = BinarySearch(a,n-1,0, x,n);
    if (result == -1)
    {
    	printf("\nElement is not present in array");
	}
	else
	{
		printf("\nElement is present at index %d",  result); 
	}
return 0; 
}

