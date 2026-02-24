#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main ()
{

int a,b;
cin>>a>>b;
char operation;
cin>>operation;
int result;
switch (operation){


case '+':
result=a+b;
cout<<result<<endl;
break;

case '-':
result=a-b;
cout<<result<<endl;
break;

case '*':
result=a*b;
cout<<result<<endl;
break;

case '/':
if(b!=0)
{
    result=a/b;
   cout<<result<<endl;
}
else 

   {
     cout<<"error division by 0";
}
    break;

default :
cout<<"invalid operation"<<endl;
break;

}

}
