// str compare
#include<stdio.h>
#include<string.h>
int main ()
{

char s[50]= "syeda lubaina morshed";
char t[50]= " syeda alifa morshed";

int d=strcmp(s,t);

if(d==0)
{
    printf("they r equal");
}
else{
    printf("not equal");
}




    return 0;
}