 #include<stdio.h>
 #include<string.h>
 int main ()
 {


char s1[]= "dcab";
int n =strlen(s1);

for(int i=0;i<n;i++)
{
    for(int j=i+1;j<n;j++)
    {
        if(s1[j]<s1[i])
        {

            int temp;
            temp=s1[i];
            s1[i]=s1[j];
            s1[j]=temp;
        }
    }
}


for(int i=0;i<n;i++)
{
    printf("%c",s1[i]);
}

return 0;
 }


