#include<string.h>
#include<stdio.h>

int cons(char a[],char b[])
{

int n=strlen(a); // pattern 
int m=strlen(b); // targeted
int word=0;
for(int i=0;i<m;i++)
{
    int count=0;
    for(int j=0;j<n;j++)
    {
        if(b[i+j]==a[j])
        {
             count++;
        }
       
    }
    if(count==n)
    {
        word++;
    }
}
return word;
}



int main ()
{

 char pattern[100]="tonmoy";
 char target_text[1000]="tnmystlfxytnotonmoytonmoy";

 int n=cons(pattern, target_text);

printf("%d",n);

}