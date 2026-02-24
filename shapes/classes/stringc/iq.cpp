#include<bits/stdc++.h>
using namespace std;
int main ()
{


int c1=0;
int c2=0;
int index1=-1;
int index2=-1;
int n;
cin>>n;
vector<int>v(n);

for(int i=0;i<n;i++)
{
  cin>>v[i];

}

for(int i=0;i<n;i++)
{
    if(v[i]%2==0)
    {   
        index1=i+1;
        c1++;
        
    }
    else{
         index2=i+1;
        c2++;
       
    }
}
if(c1<c2)
{
    cout<<index1;
}
else{
    cout<<index2;
}


    return 0;
}