#include <stdio.h>
void main()
{
	int i;
	printf("Even numbers are:");
	for(i=1;i<=20;i++)
	{
		if(i%2==0)
		{
			printf(" %d ",i);
		}
	}
	printf("\nodd numbers are:");
	for(i=1;i<=20;i++)
	{
	
	if(i%2!=0)
		{
			printf(" %d ",i);
		}
	}
}
#include <stdio.h>
void main()
{
	int sum=0;
	int i;
	for(i=1;i<=9;i+=2)
	{
		sum += i;
	}
	printf("sum of alternate numbers from 1 to 9 is: %d",sum)
	
}