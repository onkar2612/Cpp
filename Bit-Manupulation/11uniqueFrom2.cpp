#include<iostream>
using namespace std;
void unique(int arr[],int n){
    int xxor=0;
    for(int i=0;i<n;i++){
        xxor=xxor^arr[i];
    }
    int rsbm = xxor & -xxor;
    int x=0,y=0;
    for(int i=0;i<n;i++){
        if((rsbm & arr[i])==0){
            x = x^arr[i];
        }else{
            y=y^arr[i];
        }
    }
   cout<<x<<endl<<y;
}
int main(){

    int arr[8]={1,2,3,4,5,1,2,3};
   int n=8;
   unique(arr,n);
   
}