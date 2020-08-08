#include<stdio.h>

int swap(int *a,int *b)
{
	int temp;
	temp=*a;
	*a=*b;
	*b=temp;
}

int BubbleSort(int A[],int n)
{
	int flag,i,j;
	
	for(i=0;i<n-1;i++)
	{
		flag=0;
		for(j=0;j<n-1-i;j++)
		{
			if(A[j]>A[j+1])
			{
				swap(&A[j],&A[j+1]);
				flag=1;
			}
		}
	if(flag==0)break;
	}
}

int main()
{
	int A[]={1,2,3,4,5,6,7};
	BubbleSort(A,7);
	for(int i=0;i<7;i++)
	{
		printf("%d ",A[i]);
	}
	return 0;
}
