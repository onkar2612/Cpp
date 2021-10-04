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
    int x;
    bool flag=false;
    cout<<"enter element to check: ";
    cin>>x;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(arr[i][j]==x){
                flag=true;  
                cout<<i<<" "<<j<<endl;
                break;              
            }
        }
    }

    if(flag){
        cout<<x<<" Is present";
    }
    else{
        cout<<x<<"Is not present";
    }
}