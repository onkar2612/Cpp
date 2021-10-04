#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int n;
    cout<<"Enter a Decimal number: ";
    cin>>n;
    int n1=n;
    int i=0,dec=0;
    while(n1!=0){
        int rem = n1%8;
        dec = dec*10+rem;
        n1/=8;
    }
int oct=0;
while(dec!=0){
    int rem=dec%10;
    oct=oct*10+rem;
    dec/=10;
}
 cout<<oct<<" Is Octal number of decimal no."<<n;

}