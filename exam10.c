#include<stdio.h>
main()
{
	int i,j,rows=5,number=1;
	
	for(i=0;i<=rows;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("%d ",number);
			number++;
		}
		printf("\n");
	}
	
}
