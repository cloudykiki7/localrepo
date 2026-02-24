
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
       int count=0;
      vector<int>v(n,0);

      for(int i=0;i<n;i++)
      { int x;
        cin>>x;
        v[x]++;
        
        if(v[x]>1)
        {
          count=1;
        }
    }
   if (count==1){
        cout<<"1\n";
        }

else{
    cout<<"0\n";
}

      }


    }





