#include<stdio.h>
#include<string.h>
int main ()
{

char a[100]=" i love c programming";

char *word= strtok(a," ");


while(word!='\0')
{
    printf("%s\n",word);
    word=strtok('\0'," ");
}
return 0;

}