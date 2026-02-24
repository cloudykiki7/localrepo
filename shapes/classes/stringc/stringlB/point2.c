#include<stdio.h>
int dectobin(int d)
{
 if(d==0){

 return 0;
 }
 else
 {

   return (d%2 +10 * dectobin(d/2));

 }


}
int main ()

{

int d=5;
int f=dectobin(d);
printf("%d",f);

return 0;

}
