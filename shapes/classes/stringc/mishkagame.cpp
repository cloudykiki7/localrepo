#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main () 

{

int n;
cin>>n;
int c1,c2;

while(n--){
    
int mi,ch;
cin>>mi>>ch;

if(mi>ch)
{
   c1++;
}
else if (mi<ch){
  c2++;
}

}
  
if(c1>c2)
{
    cout<<"Mishka";
}

else if (c2>c1)
{
    cout<<"Chris";
}

else 
{
    cout<<"Friendship is magic!^^";
   
}

}


