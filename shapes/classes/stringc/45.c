#include<string.h>
#include<stdio.h>
int main () {

char a[1000]="i love c programming";


int word=0;
 char prev ='\0';
int i=0;
 while(1)
 {

    if(a[i]==' '||a[i]=='\n'|| a[i]=='\t'|| a[i]=='\0')
    {


        if(prev!=' ' && prev != '\n'&& prev !='\t' && prev !='\0')
        {
            word++;
        }
    }

prev=a[i];

if(a[i]=='\0')
{
    break;
}

else{
    i++;
}
 }
printf("%d",word);
 
return 0;


}