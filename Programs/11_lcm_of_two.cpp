#include<iostream>
using namespace std;
int main(){
    int n,n1,i=0;
    cout<<"Enter two numbers";
    cin>>n>>n1;
    int maximum=max(n,n1);
    while (i<1){
        if(maximum%n==0 && maximum%n1==0){
            break;
        }
        maximum+=1;
    }
    cout<<"Lcm of "<<n<<" and "<<n1<<" Is "<<maximum;
}