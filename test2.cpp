#include<bits/stdc++.h>
using namespace std;
int main()
{
    int A,B,C,X,Y;
    cin>>A>>B>>C>>X>>Y;


        if((X>=A&&Y>=B)||(X>=A&&Y>=C)||(X>=B&&Y>=C)||(Y>=A&&X>=B)||(Y>=A&&X>=C)||(Y>=B&&X>=C))
            cout<<"NO"<<endl;
        else
            cout<<"YES"<<endl;

}
