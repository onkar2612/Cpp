#include<iostream>
using namespace std; 
int hcf(int n1,int n2){
 
    
    if(n2!=0){
        return hcf(n2,n1%n2);
    }
    else{
        return n1;
    }

}
    

int main(){
    int n,n1;
    cout<<"Enter two numbers: ";
    cin>>n>>n1;
    cout<<hcf(n,n1);
}