#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main()
{
   int t;
   cin>>t;
   while(t--)
   {
       int s;
       cin>>s;
       if(s>=1900)
        cout<<"Division 1"<<endl;
       else if(1600<=s&&s<=1899)
        cout<<"Division 2"<<endl;
       else if(1400<=s&&s<=1599)
         cout<<"Division 3"<<endl;
       else if(s≤1399)
        cout<<"Division 4"<<endl;


   }

}
