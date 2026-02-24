#include<string.h>
#include<stdio.h>
int main () {

int sum=0;
char a[1000]=" happycodingtubatuba";
int l =strlen(a);

char b[100]="tuba";
int d=strlen(b);

for(int i=0;i<l;i++)
{
    int count=0;
    for( int j=0;j<d;j++)
    {
        if(a[i+j]==b[j])
        {
            count++;
        }
        else{
            count=0;
            j=0;
        }
        if(count == d)
          sum++;
        
    }
}


printf("%d",sum);

}



