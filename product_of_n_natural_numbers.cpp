#include<iostream>
using namespace std;
int main()
{
 int i,pdc=1,size;
 cout<<"the size of natural numbers: ";
 cin>>size;
 for(i=1;i<=size;i++)
 {
  pdc=pdc*i;
 }
 cout<<"the product of first n natural number is "<<pdc;
 return 0;


}

