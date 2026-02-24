// str concat
// add of string
#include<stdio.h>

int main ()
{

char s[50]= "syeda lubaina morshed";
char t[]= " syeda alifa morshed";

int i=0;
int l=0;
int j=0;
while(s[i]!='\0')
{
 i++;
 l++;
}

while(s[j]!='\0')
{
    s[l+j]=t[j];
    j++;
}

printf("%s",s);
    return 0;
}