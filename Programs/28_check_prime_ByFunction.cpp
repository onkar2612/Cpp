#include<iostream>
using namespace std; 
bool Is_Prime(int);
int main(){
    int n;
    cin>>n;
    if(Is_Prime(n)){
        cout<<n<<" Is Prime";
    }
    else{
        cout<<n<<" Is non-Prime";
    }
}

bool Is_Prime(int n){
    bool IP=true;
    if(n==0 || n==1){
        IP=false;
    }
    else{
        for(int i=2;i<=n/2;i++){
            if(n % i==0){
                IP=false;
                break;
            }
        }
        
    }
    return IP;
}