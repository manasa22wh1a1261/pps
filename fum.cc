#include<stdio.h>
void main()
	int n,i,count;
	printf("enter any value");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
{
	if(n%i==0)
	count++;
}
if(count==2)
{
	printf("\n it is a prime number");
}
	else
	{
		printf(" it is a consonant");
	}
}




