#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main()
{
    int t;
    long long int a,b,c,s;
    cin>>t;
    while(t--)
    {
        cin>>a>>b>>c;
         s=a+b+c;
     if(s%2==0)
        cout<<"Second"<<endl;
     else
        cout<<"First"<<endl;

    }

}

