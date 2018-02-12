#include<stdio.h>
int bang(int x)
{
	return ((~x) ^ 1);
}
int main()
{
	printf("%d",bang(0));
	return 0;
}
