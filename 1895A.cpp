#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,x,y,k;
    cin>>t;

    while(t--){
     cin>>x>>y>>k;
        if(x>y){
            cout<<x<<endl;}
        else if(x+k>y)
            {cout<<y<<endl;}
        else
            {cout<<2*y-(x+k)<<endl;}

    }
     return 0;
}
