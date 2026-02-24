 #include<stdio.h>
 #include<string.h>
 int main ()
 {

char a[100];
gets(a);
int n= strlen(a);
int max=0;
for(int i=0;i<n;i++)
{
    int count=1;
    for(int j=i+1;j<n;j++)
    {
        if(a[j]==a[i])
        {
            count++;
        }
    }
    if(max<count)
    {
        max=count;
    }

}
printf("%d", max);


return 0;
 }
