#include<stdio.h>
#include<string.h>
//void *memcpy(void *dest, void *src, size_t count); 

	               
void bubble(void *base, int nmemb, int size, int (*comp)(const void *p1, const void *p2) )
{
	int i, j;
	char buff[5];
	for(i=0;i<nmemb;i++)
	{
		for(j=0;j<nmemb-i-j; j++)	
		{
		   if( comp ( (base+j*size),(base+(j+1)*size) )  > 0 )
		   {
			   /*strcpy( buff, (base+j*size) );
			   strcpy( (base+j*size),(base+(j+1)*size)) ;
			   strcpy( (base+(j+1)*size), buff );
			   printf("temp=%s  base+j*size=%s  j+1=%s  ",buff, (char*)(base+j*size), (char*)(base+(j+1)*size));   for strings only*/
			 
			   memcpy( (base+j*size), (base+(j+1)*size), size ); 
		   }		  
		}
	}
	  
}



int comp(const void *p1,const void *p2)
{

	//return strcmp ( (char*) p1,(char *) p2);
	return (*p1-*p2);
	
}


int main()
{
	  int i,n=4;
	  //char s[][5]={"hh","abc","aaa"};
	  int s[]={7,5,4,2};
	  
	  bubble(s, 3, 5, comp);
	  
	  printf("sorted array is\n");
	  for(i=0;i<n;i++)
	  		printf("%d\n",s[i]);
	  	
	  return 0;
 }
  


