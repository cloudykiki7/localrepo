#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main ()
{

char a[100]="HAPPY code";
//gets(a);
int freq[26]={0};
int l= strlen(a);


for(int i=0;i<l;i++)
{
  a[i]=tolower(a[i]);
}


for(int i=0;i<l;i++)
{
    if(a[i]>='a'&& a[i]<='z')
    {
      freq[a[i]-97]++;
    }
}

for(int i=0;i<26;i++)
{
    if(freq[i]!=0)
    {
        printf("%c at ind %d\n", (i+97),freq[i] );
    }
}



}


