#include<iostream>
using namespace std; 
int main(){
    int n,n1;
    cout<<"Enter two numbers: ";
    cin>>n>>n1;
    int minimun=min(n,n1);
    for(int i=minimun;i>=1;i--){
        if(n%i==0 && n1%i==0){
            cout<<i<<" Is a hcf of "<<n<<" and "<<n1;
            break;
        }
    }

}