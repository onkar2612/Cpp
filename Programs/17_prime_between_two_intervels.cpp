#include<iostream>
using namespace std;

int main(){
    int n,n1;
    cout<<"Enter two intervels: ";
    cin>>n>>n1;

    for(int i=n;i<=n1;i++){

        bool flag=true;

        for(int j=2;j<=(i/2);j++){
            if(i%j==0){
                flag = false;
                break;
            }
            
            }
        if(flag==true){
            cout<<i<<" ";
        }
        }
        
    }
