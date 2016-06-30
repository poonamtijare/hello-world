#include<stdio.h>
void partition(int *, int);
void swap(int *, int *);
void disp(int *, int);
int main()
{
	int a[20],n,i;
	printf("How many elements: ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%d", &a[i]);
	disp(a,n);
	partition(a,n);
	disp(a,n);
}

void partition(int *a, int n)
{
	int i,j,pivot = a[0];
	i = 0, j = 1;
	do{
		if(a[j]<pivot)
		{
			//i++;
			swap(&a[i],&a[j]);
			i++;
		}
		j++;
	}while(j<n);
	
	//swap(&a[0],&a[i]);
	
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
