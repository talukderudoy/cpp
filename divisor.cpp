#include<bits/stdc++.h>
using namespace std;
void fast()
{
    cin.tie(0);
    cout.sync_with_stdio(0);
}
 int main()
{
   fast();
   int num;
   cin>>num;
   for(int i=1;i<=num;i++){
    if(num%i==0)
    cout<<i<<endl;}
    return 0;
}
