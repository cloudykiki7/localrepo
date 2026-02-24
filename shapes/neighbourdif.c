#include<stdio.h>
#include<string.h>
int main ()
{
    
     int count=0;
    char str[20];
    scanf("%[^\n]s",str);
    int i=0;
    int l=strlen(str);
   for(int i=1;i<l;i++)
    {
       if(l==1)
       {
        break;
       }
       if(l==2&& str[0]!=str[1])
       {
          count=1;
           break;
       }

        if(i==0){
      if(str[i+1]!=str[i])
      {
        count++;
      }
    }
        if(i==l-1){
      if (str[i]!=str[i-1])
      {
        count++;
      }
    }

     else if (str[i]!=str[i+1] && str[i]!=str[i-1])
    {
      count++;
    }

   
    }
      
  printf("%d",count);
    return 0;
}
