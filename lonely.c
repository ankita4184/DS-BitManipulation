#include<stdio.h>
int find( int arr[], int size )
{
	int p;
	for( int i = 0 ; i < 5; i++ )
	{
		p = p ^ arr[i];
	}
	return p;
}
int main()
{
	int arr[] = {-1, -2, 3, -1, 3};
	int p;
	p = find( arr, 5 );
	printf(" %d ", p);
	return 0;
}
