#include<iostream>
using namespace std;
int main()
{
    int n,n1=0,n2;
    cout<<"Enter a number: ";
    cin>>n;
    for(int i=0;i<=n;i++){
        n1+=i;
    }
    cout<<n1;
}