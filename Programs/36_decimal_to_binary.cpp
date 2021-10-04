#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a decimal no.: ";
    cin>>n;
    string bin;
    int n1[32];
    int i=0;
    while(n!=0){
        
        n1[i]=n%2;
        n/=2;
        i++;


    }

    for(int j=i-1;j>=0;j--){
        cout<<n1[j];
    }
}