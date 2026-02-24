#include<stdio.h>
#include<string.h>
int main ()
{

int word=0;

char str[1000]="jikutubatubajkdygfebtuba";
char target [1000]="tuba";


int l1=strlen(str);
int l2=strlen(target);



for(int i=0;i<l1;i++)
{

 int count =0;
 for(int j=0;j<l2;j++)
 {
    if(str[i+j]==target[j])
    {
        count++;
    }
   
 }

 
  if(count==l2)
    {
      word++;
    }

}


printf("%d",word);
return 0;
}