#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    if (n % 2==0){
        cout<<"Number is even";
    }
    else if (n%2==1){
        cout<<"Number is odd";
    }
    else{
        cout<<"Please enter positive number";
    }
    }