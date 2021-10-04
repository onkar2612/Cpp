#include<iostream>
using namespace std;
int main(){

    int n,mx=-114;
    cout<<"Enter size of array: ";
    cin>>n;
    int arr[n];

    for(int i=0;i<n;i++){

        cout<<"Enter elements of array: ";
        cin>>arr[i];  
        
    }

    for(int j=0;j<n;j++){
        mx = max(mx,arr[j]);
        cout<<mx<<endl;  
    }


}