#include<stdio.h>
char en( int a)
{
	char arr[] = { 'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z','a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z','0','1','2','3','4','5','6','7','8','9','+','-'};
	return arr[a];
}
void decode( char encode[10])
{
	int i = 0;
	while(encode[i] != '\0')
	{
		int b = 	
	}
}

int main()
{
	char a[10] = {'A','n','k','i','t','a','\0'};
	char encode[10]; 
	int i = 0;
	int j = 0;
	int b = 0;
	int count = 0;
	int d,e,c;
	while(a[j] != '\0' && j < 7)
	{
	d =  a[j];
	if(a[j+1] == '\0')
		{e = 0; c = 0; count += 2;}
	else
		{
		e = a[j+1];
		if(a[j+2] == '\0')
			{c = 0; count +=1;}
		else
			c = a[j+2];
		}
	b = c + 256*e+ 65536*d;
	encode[i] = en(b >> 18); i++;
	encode[i] = en((b >> 12) & 63); i++;
	encode[i] = en((b >> 6) & 63); i++;
	encode[i] = en( b & 63); i++;
	j += 3;
	}
	i = i - count;
	encode[i] = '\0';
	i = 0;
	while(encode[i] != '\0')
	{
	      	printf("%c",encode[i]);
		i++;
	}
	i = 0;
	while(count > i)
	{
		i++;
		printf("=");
	}
	decode(encode);
	return 0;
}	
