//Implementation of arrays Row major order in C program 
#include<stdio.h>
int main(){
	int A[5],i;
	printf("Size of integer datatypes: %d\n",sizeof(int));
	printf("\n Index  --Address");
	for(i=0;i<5;i++)
	{
		printf("\n %d     --%u",i,&A[i]);
	}
	return 0;
}

