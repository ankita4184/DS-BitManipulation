#include<stdio.h>
int main()
{
	int n = 128; //only 1 bit on in binary.
	if((n && - n) == n)
	{
		printf("true");
	}
	else
	{
		printf("false");
	}	
}
