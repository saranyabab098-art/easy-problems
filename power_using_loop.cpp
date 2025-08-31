#include<iostream>
#include<cmath>
using namespace std;
int main()
{
 int num,exp,ans=1;
 cout<<"enter the number: ";
 cin>>num;
 cout<<"enter the exponent: ";
 cin>>exp;
 for(int i=1;i<=exp;i++)
 {
    ans=ans*num;
 }
 cout<<"the power of "<<num<<" is "<<ans;
 return 0;
}

