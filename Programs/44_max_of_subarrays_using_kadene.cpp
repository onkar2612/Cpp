#include<iostream>
using namespace std; 
int main(){
    int n;
    cout<<"Enter size of array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter elements of array: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int sum=0,MIN=INT_MIN;
    for(int i=0;i<n;i++){
        sum+=arr[i];
        if(sum<0){
            sum=0;
        }
        MIN=max(sum,MIN);
    }

    cout<<MIN;
}