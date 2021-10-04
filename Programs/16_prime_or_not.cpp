#include<iostream>
using namespace std;
int main(){
    int n;
    bool n1=true;
    cin>>n;

    for(int i=2;i<=(n/2);i++){

        if(n%i==0){
            n1=false;
            cout<<n<<" Is not-prime number";            
            break;
        }
        
    }
    if(n1==true){
        cout<<n<<" Is a prime number";
    }
}