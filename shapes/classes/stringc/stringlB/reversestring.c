#include<stdio.h>
#include<string.h>
int main ()
{



char str[1000];
char reverse [1000];

int len, i,index,words,worde;


printf("enter a string ");
gets(str);
len=strlen(str);


for(int i=0;i<len;i++)
{

reverse[i]=str[len-1-i];

}
reverse[len]='\0';

puts(reverse);

}