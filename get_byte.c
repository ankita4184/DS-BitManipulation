//this only works for positive elements because instead of doing this create a number and then do accordingly.
#include<stdio.h>
int get_byte( int x, int b)
{
	int a = -1;
	a = a << 9;
	printf("\n%d\n",a);
	if( x >= 0)
	{	
		x = x >> (b * 8);
		x = x << 24;
		x = x >> (24 - (b * 8) );
	}
	else
	{
		x = x >> (b * 8);
		x = x ^ a;
		x = x << (b * 8);
	}
	return x;
}
int main()
{
	int a = -1;
	int b = 0;
	printf(" %d ", get_byte(a, b));
	return 0;
}
