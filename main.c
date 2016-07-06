#include <stdio.h>
#include "implementation.h"
//#include <check.h>

int main(void) {

	/*printf("%d\n", sum(3, 2));*/

	
	int a[5]={5,4,3,2,1},n=5,pos;
	/*printf("How many elements: ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%d", &a[i]);*/
	disp(a,n);
	pos=partition(a,n);
	disp(a,n);
	printf("pos=%d",pos);
	return 0;
}
