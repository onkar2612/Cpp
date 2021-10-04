#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int n;
    cout<<"Enter a binary number: ";
    cin>>n;

    int n1=n;
    int dec=0,i=0;
    while(n1!=0){
        int rem=n1%10;
        dec=dec+ rem * pow(2,i);
        i+=1;
        n1/=10;
    }

    cout<<dec<<" Is a decimal number of binary no."<<n;
}