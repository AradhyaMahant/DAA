#include<stdio.h>

void swap(int* a,int* b)
{
	int t=*a;
	*a=*b;
	*b=t;
}
int partition(int A[],int start,int end)
{
	int pivot=A[end];
	int pindex=start-1;
	for(int i=start;i<end;i++)
	{
		if(A[i]<=pivot)
		{
		 swap(&A[i],&A[pindex]);
		 pindex=pindex+1;
		}
		
	}
	swap(&A[pindex+1],&A[end]);
	return (pindex+1);
}
void quicksort(int A[],int start,int end)
{
	if(start<end)
	{
		int pindex=partition(A,start,end);
		quicksort(A,start,pindex-1);
		quicksort(A,pindex+1,end);
	}
}
void printArray(int A[], int size) 
{ 
    int i; 
    for (i=0; i < size; i++) 
        printf("%d ", A[i]); 
    printf("\n"); 
} 
int main()
{
 int A[] = {1, 2, 5, 9, 11, 6}; 
     int n = sizeof(A)/sizeof(A[0]); 
     quicksort(A,0,n-1); 
     printf("Sorted array:"); 
     printArray(A, n); 
     return 0; 
}




