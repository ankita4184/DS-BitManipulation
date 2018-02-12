#include<stdio.h>
int issame(char card1, char card2)
{
	return ((card1 & 15) == (card2 & 15));
}
int issuit(char card1, char card2)
{
	return ((card1 & 48) == (card2 & 48));
}
int isgreater(char card1, char card2)
{
	return ((card1 & 15) > (card2 & 15));
	
}	
void print(char card)
{
	printf("%d ",(card & 15));
	card = (card & 48) >> 4;
	switch(card)
	{
		case 0 :
				printf("spade"); break;
		case 1 :
				printf("heart"); break;
		case 2 :
				printf("club"); break;
		case 3 :
				printf("diamond"); break;
	}
}
int main()
{
	char card1 = 4,card2 = 3;
	//char a[] = dec_to_binary(card1);
	//char b[] = dec_to_binary(card2);
	print(card1); printf("\n");
	print(card2);
	printf("\n");
	printf("%d \n",isgreater(card1, card2));
	printf("%d \n",issame(card1, card2));
	printf("%d \n",issuit(card1, card2));
	return 0;
}
	
