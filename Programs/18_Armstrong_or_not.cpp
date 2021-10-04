#include <iostream>
#include<cmath>
using namespace std;
int main(){
    int n;
    cin>>n;
    int n1=n,re=0,n2=0;
    int n3=n;
    while (n!=0)
    {
        n2+=1;
        n/=10;
    }

while(n1!=0){
    int rem= n1%10;
    re= re+ pow(rem,n2);
    n1/=10;
}    
if(re==n3){
    cout<<n3<<" Is a armstrong number";
}
else{
    cout<<n3<<" Is a not-armstrong number";
}
}