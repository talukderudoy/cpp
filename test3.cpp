#include<bits/stdc++.h>
using namespace std;
int main()
{
    double x1,y1,x2,y2,x3,y3;
    cin>>x1>>y1>>x2>>y2>>x3>>y3;
    double A;
    A=(1.0/2.0)*(((x1*(y2-y3)))+((x2*(y3-y1)))+((x3*(y1-y2))));
    printf("%.4f\n",abs(A));
}
