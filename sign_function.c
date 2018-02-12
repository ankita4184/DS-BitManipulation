#include<stdio.h>
int sig( int n )
{
	return (n>>31) | !(!n);	
}
int main()
{
	int n = -8;
	int y = sig( n );
	printf(" %d ", y);
	return 0;
}
