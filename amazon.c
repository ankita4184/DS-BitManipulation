#include<stdio.h>
void array(int arr[4][3], int row, int col)
{
	int p,i = 0, j = 0,k;
	while(i != 4)
	{
		k = col;
		j = 0;
		p = row % 10;
		while( j != 3 )
		{
			arr[i][j] = p*(k % 10);
			k = k / 10;
			j++;
		}
		row = row / 10;
		i++;
	}
	for( i = 0; i < 4; i++ )
	{
		for( j = 0; j < 3; j++)
		{
			printf("%d\t", arr[i][j]);
		}
		printf("\n");
	}
}
int main()
{
	int arr[4][3] = { {1, 1, 1}, {0, 1, 1}, {1, 1, 0}, {1, 1, 1} };
	int i,j,row = 0, col = 0;
	for( i = 0; i < 4; i++)
	{
		for( j = 0; j < 3; j++)
		{
			if(arr[i][j] == 0 )
			{
				row = row*10 + 0;
				j = -1;
				break;
			}
		
		}
			if( j != -1 )
			{
				row = row*10 + 1;
			}
	}
	
	for( i = 0; i < 3; i++)
	{
		for( j = 0; j < 4; j++)
		{
			if(arr[j][i] == 0)
			{
				col = col*10 + 0;
				j = -1;
				break;
			}
			
		}
		if( j != -1 )
		{
			col = col*10 + 1;
		}
	}
	array(arr,row,col);
	return 0;
}
