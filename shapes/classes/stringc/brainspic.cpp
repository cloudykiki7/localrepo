#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main ()
{

int m,n;
cin>>n>>m;
     int c=0;
char a[n][m];

for(int i=0;i<n;i++)
{
    for(int j=0;j<m;j++)
    {
        cin>>a[i][j];
    }
}

for(int i=0;i<n;i++)
{
    for(int j=0;j<m;j++)
    {
 
        if (a[i][j]=='C'|| a[i][j]=='M'|| a[i][j]=='Y'|| a[i][j]=='G')
        {
            c=1;
        }
        
    }
}

if(c==1)
{
    cout<<"#Color"<<endl;
}
else 
{
    cout<<"#Black&White"<<endl;
}


return 0;


}