#include <bits/stdc++.h>

int main(){

    long t;
    cin>>t;
    while(t--)
    {
        long a, b, c, d;
        cin>>a>>b>>c>>d;
        cout<<((b > a) + (c > a) + (d > a));
    }

}
