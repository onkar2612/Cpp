#include<iostream>
using namespace std ;
int main(){

    int n,n1;
    cin>>n;
    n1=n|1;
    cout<<n1<<endl;
    if(n1==0){
        cout<<n<<" is even number";
    }else if(n1== 1){
        cout<<n<<" is Odd number";
    }
   
}