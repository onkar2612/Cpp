#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int n,n1;
    cout<<"Enter two intervels: ";
    cin>>n>>n1;
    for(int i=n;i<=n1;i++){
       int i1=i,pw=0;
       int re=0;
       while(i1!=0){
           pw+=1;
           i1/=10;
       }
       i1=i;
       while(i1!=0){
           int rem=i1%10;
           re = re + pow(rem,pw);
           i1/=10;
       }
       if(re==i){
           cout<<re<<endl;
       }
    }
}