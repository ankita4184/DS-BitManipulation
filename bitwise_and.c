#include<stdio.h>
int bit_and( int a, int b)
{
	return ~( (~a) | (~b) );
}
int main()
{
	int a,b;
	for(a = 0; a <= 1; a++)
	{
		for(b = 0; b <= 1; b++)
		{
			printf(" %d & %d = %d \n", a, b, bit_and(a, b));
		}
	}
	return 0;
}
