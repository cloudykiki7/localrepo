// #include<stdio.h>
// #include<string.h>
// int main ()
// {

// int word=0;

// char str[1000]="iwanttoeaturpancreas";
// int l=strlen(str);
// //char target [1000]="tuba";
// char tar='t';

// for(int i=0;i<l;i++)
// {
//     //int idx=-1;
//     if(str[i]==tar)
//     {
//         word++;
//     }
// }
// printf("%d",word);

// return 0;
// }



// search occ



// palindrome

#include<stdio.h>
#include<string.h>
int main ()
{

int word=0;

char str[1000]="madam";

int l1=strlen(str);

int start=0;
int end=l1-1;

while(start<=end)
{
    if(str[start]!=str[end])

     break;
     start++;
     end--;
}
if(start>=end)
{
printf("palindrome");

}

else
{
    printf("not");
}

return 0;
}