#include<stdio.h>
#include<stdlib.h>
int main()
{
	int arr[] = {4, 2, 2, 3, 3, 3, 4, 4, 2, 1};
	int i = 0, j, k = 0,num = 0,p = 1;
	while(i != 10)
	{
		i = 0;
		j = 0;
		for(k = 0; k < 10; k++)
		{
			j = j + ( arr[k] & 1 );
			arr[k] = arr[k] >> 1;
			if(arr[k] == 0)
				i++;
		}
		if( j % 3 == 0)
			num = num + 0*p;
		else
			num = num + 1*p;
		p *= 2;
	}
	printf("%d", num);
}

