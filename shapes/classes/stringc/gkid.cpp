#include<bits/stdc++.h>
#include<iostream>

using namespace std;
int main ()
{

int t;
cin>>t;

while(t--)

{
    int n;
    cin>>n;
    int a[n];

    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
  
    long long int maxprod=0;
    for(int i=0;i<n;i++)
    {
          a[i]=a[i]+1;
          long long product=1;
        for(int j=0;j<n;j++)
        {
      
         product=product*a[j];
        }
         if(product>maxprod)
         {
            maxprod=product;
         }
          a[i]=a[i]-1;
        }
         
         cout<<maxprod<<endl;
    }
     
   return 0;
}

