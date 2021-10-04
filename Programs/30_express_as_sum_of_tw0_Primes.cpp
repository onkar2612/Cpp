#include<iostream>
using namespace std;
bool C_P(int n){
    bool cp=true;
    if(n==0 || n==1){
        cp=false;
    }
    else{
        for(int i=2;i<=(n/2);i++){
            if(n%i==0){
                cp=false;
                break;
            }
        }
    }
    return cp;
}

int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    bool flag = false;

    for(int i=2;i<=n/2;i++){
        if(C_P(i)){
           if (C_P(n - i)) {
                cout << n << " = " << i << " + " << n-i << endl;
                flag = true;
            }

        }
    }
}

