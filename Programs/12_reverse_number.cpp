#include<iostream>
using namespace std;
int main()
{
 int n;
 cin>>n;
 int re=0;
 while(n!=0){
     int rem = n%10;
     re = re*10 + rem;
     n=n/10;
 }
    cout<<re;
 }