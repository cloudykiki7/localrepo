#include<stdio.h>
#include<string.h>
int main ()
{



char str[1000]="i love programming";
char target [1000]="love";

int l1=strlen(str);
int l2=strlen(target);


for(int i=0;i<l1;i++)
{
     int found=1;
    for(int j=0;j<l2;j++)
    {
        if(str[i+j]!=target[j])
        {
            found=0;
        }
    }

if(found==1)
{
    printf("%s at ind %d\n",target,i);
}

}

}