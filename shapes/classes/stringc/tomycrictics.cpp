#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main () 

{

long long int t;
cin>>t;
int sum=10;
while(t--)
{
 int a,b,c;
 cin>>a>>b>>c;

 if(a+b>=sum || c+b>=sum || a+c>=sum)
{
    cout<<"Yes"<<endl;
}

else 
{

cout<<"No"<<endl;
}

}

}