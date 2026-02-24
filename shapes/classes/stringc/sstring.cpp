#include<bits/stdc++.h>
#include<iostream>
using namespace std;


int main () 

{

long long int t;
cin>>t;

while(t--)
{
 string s;
 cin>>s;
 int l=s.size();
if(l%2!=0)
{
    cout<<"NO"<<endl;
    continue;
}

bool flag =1;
 
if (l%2==0)
{ 
    for(int i=0;i<l/2;i++)
    {
            if(s[i]!=s[i+l/2])
            {
               flag=0;
               break;
                
    }
}
}

if(flag==1)
{
    cout<<"YES"<<endl;
}
else
cout<<"NO"<<endl;

}
return 0;
}

