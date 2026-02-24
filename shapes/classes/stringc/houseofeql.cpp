#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main () 

{

long long int n;
cin>>n;
int count=0;
int max=0;
int inc=0;
int incsum=0;
vector<int> v(n);

   for(int i=0;i<n;i++)
   {
    cin>>v[i];
   }

   for(int i=0;i<n;i++)
   {
    if(v[i]>max)
    {
        max=v[i];
    }
   }

   for(int i=0;i<n;i++)
   {
     inc=max-v[i];
     incsum =incsum+inc;

   }
   cout<<incsum;

}