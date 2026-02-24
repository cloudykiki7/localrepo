#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main ()
{
int cost;
int c1;
int t;
cin>>t;
int n;
while(t--)
{
int n,a,b;
cin>>n>>a>>b;


  int rem=n%2;
  cost= rem*a + b*(n/2);

   c1=n*a;

cout<<min(cost,c1)<<endl;

}


}