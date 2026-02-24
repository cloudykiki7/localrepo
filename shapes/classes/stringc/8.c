#include<stdio.h>
int main ()
{
 char str1[50]="syeda lubaina morshed";
 char str2[50];

 int i=0;
 int length=0;
 int j=0;

 while(str1[i]!='\0')
 {
 i++;
 length++;
 }

 for(j=0,i=length-1;i>=0;i--,j++)
 {
    str2[j]=str1[i];
 }
 str2[j]='\0';

 printf("%s",str2);

}