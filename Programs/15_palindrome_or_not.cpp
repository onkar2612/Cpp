#include<iostream>
using namespace std; 
int main(){
    int n,n1;
    cout<<"Enter a number : ";
    cin>>n;
    n1=n;
    int re=0;
    while(n!=0){
        int rem = n%10;
        re =re*10+rem;
        n/=10;

    }
if(re==n1){
    cout<<n1<<" is number is palindome number";

}
else{
    cout<<n1<<" is number is not palindrome number";
}
    
}