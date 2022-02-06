#include<stdio.h>
#include<climits>

int max(int a, int b) { return (a > b)? a : b; }
int max(int a, int b, int c) { return max(max(a, b), c); }  
int MaxSum(int A[],int n)
{
	if(n==1)
	{
		return A[0];
	}
	int m= n/2;
	int left=MaxSum(A,m);
	int right=MaxSum(A+m,n-m);
	int leftsum= INT_MIN, rightsum=INT_MIN,sum=0;
	for(int i=m;i<n;i++)
	{
		sum+=A[i];
		rightsum = max(rightsum,sum);
		
	}
	sum=0;
	for(int i=(m-1); i>=0;i--)
	{
		sum+= A[i];
		leftsum = max(leftsum,sum);
	}
	int ans= max(left,right);
	return max(ans,leftsum+rightsum);	
}

int main() 
{ 
    int A[] = {2, 3, 4, 5, 7}; 
    int n = sizeof(A)/sizeof(A[0]); 
    int max_sum = MaxSum(A, n); 
    printf("Maximum contiguous sum is = %d ", max_sum); 
    return 0; 
} 
