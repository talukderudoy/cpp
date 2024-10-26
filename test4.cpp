#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,a,b,c,d,e,f;

    cin>>t;
    while(t--)
    {
        int n;
    cin>>n;

   a=(n/100000)%10;
   b=(n/10000)%10;
   c=(n/1000)%10;
   d=(n/100)%10;
   e=(n/10)%10;
   f=n%10;

    int s=(a+b+c);
    int x=(d+e+f);
        if(s==x)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
}
