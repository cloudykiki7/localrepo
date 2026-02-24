#include<stdio.h>
#include<string.h>


int main ()
{



char a[1000];
gets(a);
int n=strlen(a);

for(int i=0;i<n-1;i++)
{
    for(int j=0;j<n-1-i;j++)
    {
        if(a[j]>=a[j+1])
        {
            char temp= a[j];
            a[j]=a[j+1];
            a[j+1] =temp;

        }
    }
}

if(a[n-1]=='\n')
{
    a[n-1]=='\0';
}
int count=0;
for(int i=0;i<n;i++)
{
    if(i==0||a[i]!=a[i-1])
    {
        count++;
    }
}

printf("%d",count);

}