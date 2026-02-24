#include<stdio.h>
#include<string.h>

void swap (int *num1, int *num2)
{
    int temp;
    temp=*num1;
    *num1=*num2;
    *num2=temp;

}


int main ()
{


int a=10;
int b=20;
swap (&a,&b);

printf("%d %d",a,b);




}