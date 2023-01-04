// program to generate all the prime numbers between 1 and n
#include<stdio.h>
int main()
{	
	int i,j,n,count=0;
	printf("enter the range");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		count=0;
		for(j=1;j<=i;j++)
		{
			if(i%j==0)
		count++;
		}
		if(count==2)
			printf("\n %d",i);
	}
	return 0;
}



