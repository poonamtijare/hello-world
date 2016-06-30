#include<stdio.h>
#include<string.h>
#include<stdlib.h>
//

void swap(void *p1, void *p2 , int size)
{
	void *temp;
	temp=malloc(size );
	memcpy( temp, p1,  size ); //void *memcpy(void *dest, void *src, size_t count); converts to void *
	memcpy( p1, p2, size);
	memcpy( p2, temp, size);
			    
}

               
void bubble(void *base, int nmemb, int size, int (*comp)(void *p1, void *p2) )
{
	int i, j;
	
	//char buff[5];
	
	for(i=0;i<nmemb;i++)
	{
		for(j=0;j<nmemb-i-1; j++)	
		{
		   if( comp ( (base+j*size),(base+(j+1)*size) )  > 0 )
		   {
			  
			   printf(" base+j*size=%p  j+1=%p  ",(base+j*size), (base+(j+1)*size));   //for strings only*/  
			    
			   swap( (base+j*size), (base+(j+1)*size), size);
			 
		   }		  
		}
	}
	  
}



int comp(void *p1,void *p2)
{

	//return strcmp ( (char*) p1,(char *) p2);
	
	if(*(int*)p1 > *(int*)p2) { 
	printf("%d  %d",*(int*)p1, *(int*)p2);
	return 1;
	}
	else return 0;
	
}


int main()
{
	  int i,n=5;
	  
	  //char s[][5]={"hh","abc","aaa"};
	  
	  int s[5]={5,7,2,4,6};
	  
	  bubble(s, 5, sizeof(int), comp);
	  
	  printf("sorted array is\n");
	  for(i=0;i<n;i++)
	  		printf("%d\n",s[i]);
	  	
	  return 0;
 }
  


