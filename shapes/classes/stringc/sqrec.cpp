#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main ()
{

int t;
cin>>t;
while(t--)

{
   int l1,l2,l3,b1,b2,b3;
   cin>>l1>>b1>>l2>>b2>>l3>>b3;

   if(l1+l2+l3==b1+b2+b3)
   {
    cout<<"YES";
   }
   else{
    cout<<"NO";
   }


}
return 0;


}