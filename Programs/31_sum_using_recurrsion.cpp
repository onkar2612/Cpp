#include<iostream>
using namespace std;
int s_um(int n){
    if (n!=0)
    return n + s_um(n-1);
    return 0;
}

int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    cout<<s_um(n);
}