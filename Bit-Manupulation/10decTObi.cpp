#include<iostream>
using namespace std; 
void dtob(int n){
    int n1=n,j=0;
    while (n1!=0)
    {
        j++;
        n1=n1>>1;
    }
    
    int arr[j];
    for(int i=j-1;i>=0;i--){
        int rem=n&1;
        if(rem==0){
        arr[i]=0;
        }else{
            arr[i]=1;
        }
        n=n>>1;

    }
    for(int i=0;i<j;i++){
        cout<<arr[i];
    }
}

int main(){
   dtob(10);
}