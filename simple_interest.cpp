#include<iostream>
using namespace std;
int main()
{
    float p,r,t,ans;
    cout<<"enter the principal rate: ";
    cin>>p;
    cout<<"enter the interest rate: ";
    cin>>r;
    cout<<"enter the number of years: ";
    cin>>t;
    ans=(p*r*t)/100;
    cout<<"answer is "<<ans;
    return 0;



}

