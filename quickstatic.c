#include<stdio.h>
#include<string.h>

int comp(void *p1, void *p2)
{
	/*char *c1= (char*) p1;
	char *c2=(char*) p2;
	printf("%s  %s\n", c1, c2);*/
	return strcmp ((char*) p1,(char *)p2);
	
}



int main()
{
  int i,n=4;
  char s[][5]={"hh","abc","aaa"};
  
  
  qsort(s,3, 5, comp);
  
  printf("sorted array is\n");
  for(i=0;i<n;i++)
  	printf("%s\n",s[i]);
  	
  	return 0;
 }
  


