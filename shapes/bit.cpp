#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main ()
{
int t;
cin>>t;
while(t--)
{

    int x,y,z;
    cin>>x>>y>>z;

    bitset<64> b1(x);
     bitset<64> b2(y);
     bitset<64> b3(z);
bitset<64> r= b1 & b2 & b3;
     if(r.any())
     {
        cout<<"YES"<<endl;
     }
    else{
        cout<<"NO"<<endl;
    }



}




}