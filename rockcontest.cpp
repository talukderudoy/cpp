#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string  s;
        cin>>s;
        char a[9]= {'0','a','b','c','d','e','f','g','h'};
        char n[9]= {'0','1','2','3','4','5','6','7','8'};
        for(int i=1; i<9; i++)
        {
            if(a[i]==s[0])
                continue;
            else
                cout<<a[i]<<s[1]<<endl;
        }
        for(int i=1; i<9; i++)
        {
            if(n[i]==s[1])
                continue;
            else
                cout<<s[0]<<n[i]<<endl;
        }
    }

    return 0;
}
