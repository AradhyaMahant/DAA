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

void printarray(int a[],int n)
{
	 	for(int i=0;i<n;i++)
	 	{
	 		printf("%d",a[i]);
	 		printf("\t");
		 }
	
}	
int main() 
{ 
    int a[] = { 12, 11, 13, 5, 6 }; 
    int n = sizeof(a) / sizeof(a[0]); 
  
    insertionSort(a,n); 
 	printarray(a,n);

  
    return 0; 
} 

