#include<stdio.h>
#include<string.h>
int main ()
{

int word=0;

char str[1000]="syeda lubaina tuba";
//char target [1000]="tuba";
int l1=strlen(str);

for(int i=0;i<l1;i++) 
{
    if(str[i]>='a' && str[i]<='z')
    {
        str[i]=str[i]-32;
    }
}

printf("%s",str);


return 0;
}