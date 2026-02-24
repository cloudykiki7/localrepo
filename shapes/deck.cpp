#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main ()
{

int t;
cin>>t;
long long n;
long long  k;
while(t--)
{

cin>>n>>k;
string s;
cin>>s;
char op;
for(int i=0;i<k;i++)
{
    if(s[i]==0)
    {
        op='-';
    }
    else if (s[i]==1){
     op='+';
    
    }
    else if (s[i]==2){
     op='?';
    
    }
    for(int j=1;j<=n;j++)
    {
        cout<<op<<endl;
    }
}

}
}