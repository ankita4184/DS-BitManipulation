#include<stdio.h>
int condition(int x,int y,int z)
{
	return ((!(!x)<<31) >> 31 & y ) ^ ((( !x << 31) >> 31) & z);
}
int main()
{
	printf("%d",condition(3, 4, 5));
	return 0;
}
