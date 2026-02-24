#include<stdio.h>
#include<string.h>

int length(char b[])
{
    int i=0;
    while(b[i]!='\0')
    {
        i++;
    }
    return i;
}


void string_copy( char a [], char b [])
{
  int i=0;
for(i=0;i<length(b);i++)
{
    
    a[i]=b[i];
}
}

int main ()

{

char a[100];
char b[100]="Hello world";
string_copy(a,b);

int n=length(b);

puts(a);
}