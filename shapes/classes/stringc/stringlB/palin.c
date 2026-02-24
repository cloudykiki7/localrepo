#include<stdio.h>
#include<string.h>
int main ()
{

int word=0;

char str[1000]="racecar";
//char target [1000]="tuba";


int l=strlen(str);

int n=l/2;
int palin=1;
for(int i=0;i<l;i++)
{
    if(str[i]!=str[l-1-i])
    {
        palin=0;
        break;
    }
}

if(palin)
{
    printf("palindrome");
}
else 
{
    printf("not palin");
}

return 0;
}