#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int n;
    cout<<"Enter a Octal number: ";
    cin>>n;
    int n1=n;
    int i=0,dec=0;
    while(n1!=0){
        int rem = n1%10;
        dec = dec + (rem* pow(8,i));
        n1/=10;
        i+=1;
    }
cout<<dec<<" Is a decimial number of octal no."<<n;

}