#include<iostream>
using namespace std;

int main(){
    int n,n1,n2;
    cout<<"Enter first number: ";
    cin>>n;
    cout<<"Enter second number: ";
    cin>>n1;
    n2=n;
    n=n1;
    n1=n2;
    cout<<n<<n1;
    

}