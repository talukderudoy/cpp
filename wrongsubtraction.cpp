#include<bits/stdc++.h>
using namespace std;
int main()
{
 int n,k,i;
 cin>>n;
 cin>>k;
 //int d=n/10;
     for(i=1;i<=k;i++)
     {
        if(n%10==0)
        {
            n=n/10;
        }

       else
         n=n-1;
     }
     cout<<n<<endl;
    return 0;

}

