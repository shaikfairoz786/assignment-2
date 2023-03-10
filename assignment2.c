#include<stdio.h>
main()
{
	int i,b,c=0;
	printf("enter a value:");
	scanf("%d",&b);
    for(i=1;i<=b;i++)
	{
		if(b%i==0)
		c++;
	}
	if(c==2)
	{
		printf("it is a prime number");
	}
	else
	{
		printf("it is not a prime number");
	}
}
