#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int n;
    cout<<"Enter a binary no: ";
    cin>>n;
    int n1=n;
    int dec=0,i=0;
    while(n1!=0){
        int rem = n1%10;
        dec = dec + rem* pow(2,i);
        i+=1;
        n1/=10;

    }
 int oc=0;
    while(dec!=0){
        int rem = dec%8;
        oc = oc*10 + rem;
        dec/=8;
    }
int oct=0;
while(oc!=0){
    int rem=oc%10;
    oct = oct*10 + rem;
    oc/=10;
}
cout<<oct<<" Is a octal no. of binary no."<<n;

}