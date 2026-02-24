 #include<stdio.h>
 #include<string.h>
 int main ()
 {


char s1[100];
gets(s1);
int n =strlen(s1);
int max=0;

for(int i=0;i<n;i++)
{
    int count=1;
for(int j=i+1;j<n;j++)
{
    if(s1[j]==s1[i])
    {
        count++;
    }

}
    if(max<count)
{
    max=count;
}

for(int i=0;i<n;i++)
{
    int count=1;
    char ch= s1[i];
 for(int j=i+1;j<n;j++)
 {
    if(s1[j]==s1[i])
    {
       count++;
    }
 }
 if(count==max)
 {
   printf("%c %d\n",ch,max);

 }
    
}

}
return 0;
 }
