#include<iostream>
using namespace std;
int main(){
    int n,m;
    cout<<"Enter rows and columns of array respectively: ";
    cin>>n>>m;
    int arr[n][m];
    cout<<"Enter elements of array: \n";
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }

    cout<<"Array is \n";

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<arr[i][j]<<" ";
        }

        cout<<endl;
    }
}