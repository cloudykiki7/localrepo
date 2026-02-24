// str add

#include<stdio.h>
#include<string.h>
int main ()
{

char str [50]=" physics sucks";
char str2 [20] = "ee sucks";

int len1= strlen(str);
int len2= strlen(str2);

for(int i=0;i<=len1;i++)
{

    str[len1+i]=str2[i];

}
printf("%s",str);





}