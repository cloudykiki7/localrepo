#include<string.h>
#include<stdio.h>
int main () {

char a[100]="abdchhbvjkeihindcjbwb";
int l=strlen(a);
int count =0;
int freq[26]={0};

for(int i=0;i<l;i++)
{
    if(a[i]>='a' && a[i]<='z')
    {
        freq[a[i]-97]++;
    
    }
    else if (a[i]>='A' && a[i]<='Z')
    { 
        freq[a[i]-65]++;
    }
    
}

for(int i=0;i<26;i++)
{
    if(freq[i]!=0)
    {
        printf("'%c' = %d\n",(i+97),freq[i]);
    }
}

}
