#include<stdio.h>
#include "implementation.h"

/*int sum(int a, int b) {

	return a + b;
}

*/
int partition(int *a, int n)
{
	int i,j,pivot = a[0];
	i = n, j = n-1;
	do{
		if(a[j]>pivot)
		{
			i--;
			swap(&a[i],&a[j]);
			//i++;
		}
		j--;
	}while(j>0);
	i--;
	swap(&a[0],&a[i]);
	return i;
}

void swap(int *p, int *q)
{
	int t;
	t = *p;
	*p = *q;
	*q = t;
}

void disp(int *a,int n)
{
	int i;
	for(i=0;i<n;i++)
		printf("%d\t", a[i]);
	printf("\n");
}
