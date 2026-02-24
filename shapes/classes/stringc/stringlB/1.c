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
while(b[i]!='\0')
{
    a[i]=b[i];
    i++;
}


}

int main ()

{

char a[100];
char b[100]="hello world";
string_copy(a,b);

int n=length(b);


puts(a);


}