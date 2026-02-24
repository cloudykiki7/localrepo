#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main ()
{


int t;
cin>>t;
while(t--)

{
    int n;
    cin>>n;
    int a,b,c;
    bool flag=false;
    for(int a=1;a<=26 && !flag;a++)
    {
        for(int b=1;b<=26 && !flag ;b++)
        {
            c=n-(a+b);
            if(c>=1 && c<=26)
            {
                cout<<(char)(a+96)<<(char)(b+96)<<(char)(c+96)<<endl;
                flag=true;
            }
        }
    }




}


return 0;

}
