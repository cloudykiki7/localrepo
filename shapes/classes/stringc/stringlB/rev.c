#include<stdio.h>
#include<string.h>
int main ()
{



char str[1000];
char reverse [1000];

printf("enter a string ");
gets(str);

int l=strlen(str);

for(int i=l-1;i>=0;i--)
{
    printf("%c",str[i]);
}





}