#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main ()
{
int c=0;
int t;
cin>>t;
int n;
while(t--)
{
string s;
cin>>s;

while(s!="abc")
{
    swap(s[0],s[1]) ;
     swap(s[1],s[2]) ;
   swap(s[0],s[2]);
    c++;
}
if(c==1)
{
    cout<<"YES";
}
else{
    cout<<"NO";
}
}


}