#include<iostream>
using namespace std; 
int main(){
    int n,n1=1,n2=0,fibo=0;
    cout<<"Enter a number: ";
    cin>>n;
    for(int i=0;i<=n;i++){
        cout<<fibo<<endl;
        fibo=n1+n2;
        n1=n2;
        n2=fibo;
    }
}