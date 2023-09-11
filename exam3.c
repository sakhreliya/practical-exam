#include<stdio.h>
main()
{
	int temp,a,b=0,n;
	
	printf("Enter Value :- ");
	scanf("%d",&n);
	
	temp=n;
	while(n>0)
	{
		a= n%10;
		b=b*10+a;
		n = n/10;
	}
	printf("reverse-num = %d\n",b);
	if(temp==b)
	{
		printf("Num is palindrome");
	}
	else
	{	
		printf("Num is not palindrome");
	}
}
	
