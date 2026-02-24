#include<stdio.h>
#include<stdio.h>
int main ()
{

char st1[50]="i love cooking";
char st2[50];


int i=0;
int j=0;
int length=0;
while(st1[i]!='\0')
{
   i++;
   length++;
}

for(j=0,i=length-1;i>=0;i--,j++)
{
    st2[j]=st1[i];
}
st2[j]='\0';

printf("%s",st2);
return 0;



}