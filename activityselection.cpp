#include<stdio.h>

void activityselect(int n,int start[],int finish[])
{
	printf("activities selected are n");
	int i=0;
	printf("%d " , i);
	for(int j=1;j<n;j++)
		{
				
		if(start[j]>=finish[i])
		{	printf("%d " ,  j);
			i=j;
		}
		}
}
int main()
{
	int s[]={0, 3, 5, 4, 7, 8};
	int f[]={0, 1, 2, 5, 7, 8};
	int n= sizeof(s) / sizeof(s[0]);
	activityselect(n,s,f);
	return 0;
}
