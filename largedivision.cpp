#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {

         for(int i=1;i<=t;i++)

        {

        long long int a,b;
        cin>>a>>b;
        if(a%b==0)
            cout<<"Case"<<i<<"Divisible"<<endl;
        else
            cout<<"Case"<<i<<"Not divisible"<<endl;
            }
    }
    return 0;
}
