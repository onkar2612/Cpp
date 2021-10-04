#include<iostream>
using namespace std;
bool C_P(int);

int main()
{
    int n,n1;
    cout<<"Enter two intervels: ";
    cin>>n>>n1;
    for(int i=n;i<=n1;i++){
        if(C_P(i)){
            cout<<i<<endl;
        }
    }
    
} // namespace name

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
