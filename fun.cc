#include<stdio.h>
void swap(int x,int y)
{	x=x+y;
	y=x-y;
	x=x-y;
	printf("swapped values %d and %d",x,y);
}
int main()
{
	int x=7;y=10;
	swap(x,y)
		printf("original value %d and %d",x,y);
	swaptemp(x,y);
	void swaptemp( int a, int b)
		int temp,a,b;
	temp=a;
	a=b;
	b=temp;
return 0;
}

