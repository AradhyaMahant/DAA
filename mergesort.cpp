#include <stdio.h>
#include <stdlib.h> 

void Merge(int A[],int l,int m,int r)
{
	int nL=m-l+1;
	int nR=r-m;
	int i,j,k;
	int L[nL];
	int R[nR];
	
	
	for(i=0;i<nL;i++)	
		L[i]=A[i+l];
	for(j=0;j<nR;j++)	
		R[j]=A[m+j+1];
	i=0;j=0;k=0;	
	while(i<nL && j<nR)
	{
		if(L[i] <= R[j])
		{
			A[k]=L[i];
			i=i+1;
		}
		else
		{
			A[k]=R[j];
			j=j+i;
		} k=k+1;
	
	}
	while(i < nL)
	{
			A[k]=L[i];
			i=i+1;	
			k=k+1;
	}
	while(j < nR)
	{
			A[k]=R[j];
			j=j+i;
			k=k+1;
	}
}

void Mergesort(int A[],int l,int r)
{

   if(l<r)
   {
   	
   	int m = l + (r - l) / 2; 
   
	Mergesort(A,l,m);
	Mergesort(A,m+1,r);	
	
	Merge(A,l,m,r);
	}
}
void printarray(int A[],int n)
{
	for(int i=0;i<n;i++)
	  printf("%d ", A[i]);
    printf("\n");
}

int main()
{	
  int A[]={12, 11, 13, 5, 6, 7 };
  int n = sizeof(A) / sizeof(A[0]); 
  
  printf("Given array is \n"); 
  printarray(A,n);
  
  Mergesort(A,0,n-1);
  
  printf("\nsorted array is \n"); 
  printarray(A,n);
  return 0;

}
