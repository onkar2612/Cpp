#include<iostream>
using namespace std;
int main()
{
    int n,n1,n2;
    cout<<"Enter three numbers: ";
    cin>>n>>n1>>n2;
    if (n>n1 && n>n2){
        cout<<n<<" Is greater";
    }
    else if (n1>n2){
        cout<<n1<<" Is greater";
    }
    else{
        cout<<n2<<" Is greater";
    }
    } 

