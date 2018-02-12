#include<stdio.h>
#include<stdlib.h>
#include<string.h>
char encode(int a)
{
    char ref[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+-";
    return ref[a];
}
int main()
{
    char s[100];
    char e[100];
    scanf("%s",s);
    int length = strlen(s);
    int comp = length / 3;
    int left = length % 3;
    int i = 0, num1, num2, num3, j = 0, k = 0;
    long int num;
    while(k < comp)
    {
        k++;
        num1 = (int)(s[i]);
        num2 = (int)(s[i+1]);
        num3 = (int)(s[i+2]);
        num = 65536*num1 + 256*num2 + num3;
        e[j] = encode((num >> 18));
        e[j+1] = encode((num >> 12) & 63);
        e[j+2] = encode((num >> 6) & 63);
        e[j+3] = encode((num & 63));
        j += 4;
        i += 3;
    }
    if(left == 1)
    {
        num1 = (int)s[i];
        num = 65536*num1;
         e[j] = encode((num >> 18));
        e[j+1] = encode((num >> 12) & 63);
        e[j+2] = encode((num >> 6) & 63);
        e[j+3] = encode((num & 63));
        e[j+4] = '=';
        e[j+5] = '=';
        j = j + 6;
   }
    else if(left == 2)
    {
        num1 = (int)s[i];
        num2 = (int)s[i+1];
        num = 65536*num1 + 256*num2;
         e[j] = encode((num >> 18));
        e[j+1] = encode((num >> 12) & 63);
        e[j+2] = encode((num >> 6) & 63);
        e[j+3] = encode((num & 63));
        e[j+4] = '=';
        j = j + 5;
    }
    e[j] = '\0';
    printf("%s  %d  %d  %d  %s",s, length, left, comp, e);
    return 0;
}
