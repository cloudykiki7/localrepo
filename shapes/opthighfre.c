#include<stdio.h>
#include<string.h>
int main ()
{

char str[100];
gets(str);

int a[26]={0};

for(int i=0;i<strlen(str);i++)
{
    char ch=str[i];
    int ascii= (int)ch;
    a[ascii-97]++;
}

int max=0;

for(int i =0;i<26;i++)
{
    if(a[i]>max)
    {
        max=a[i];
    }

}

printf("%d",max);





return 0;
}