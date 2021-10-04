#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a year: ";
    cin>>n;
    if(n%4==0){
        if(n%100==0){
            if(n%400==0){
                cout<<n<<" Is a leap year";
            }
            else{
                cout<<n<<" Is not leap year";
            }
        }
        else{
            cout<<n<<" Is a leap year";
        }
    }
    else{
        cout<<n<<" Is not leap year";
    }
}