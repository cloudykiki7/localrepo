#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main ()
{

int t;
cin>>t;
int n;
while(t--)
{

cin>>n;
string s;
cin>>s;
int count1=0;
int c2=0;
int c3=0;
 int c=0;
for(int i=0;i<n;i++)
{

if(s[i]=='a')
count1++;
else if(s[i]=='b')
c2++;

}
if(count1==c2)
{   cout<<0<<endl;
}
else if(count1!=c2)
{
    cout<<-1<<endl;
}
else {
    while(count1!=c2)
    {
       count1++;
       c2++;
        c++;
    }
cout<<c<<endl;
}
}
}

