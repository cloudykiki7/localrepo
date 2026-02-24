#include<stdio.h>
#include<string.h>
int main ()
{

char a[100];
gets(a);
int fre[256]={0};
int count=0;
int n=strlen(a);
for(int i=0;i<n;i++)
{
    unsigned char ch = a[i];
    
    if(fre[ch]==0 && ch!= ' ')
    {
        fre[ch]=1;
        count++;
    }
}

printf("%d",count);




}