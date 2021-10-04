#include<iostream>
using namespace std;
int main(){
    int r,c;
    cout<<"Enter rows and columns of array respectively: ";
    cin>>r>>c;
    int arr[r][c];
    cout<<"Enter array elements: \n";
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cin>>arr[i][j];
        }
    }
        cout<<endl;

    int top=0,bottom=r-1,left=0,right=c-1;
    while(top<=bottom && left<=right){

        for(int row=left;row<=right;row++){
            cout<<arr[top][row]<<" ";
        }

        cout<<endl;
        top++;
        for(int col=top;col<=bottom;col++){
            cout<<arr[col][right]<<" ";
        }

        cout<<endl;
        right--;

        for(int row=right;row>=left;row--){
            cout<<arr[bottom][row]<<" ";
        }

        cout<<endl;
        bottom--;

        for(int col=bottom;col>=top;col--){
            cout<<arr[col][left]<<" ";
        }

        cout<<endl;
        left++;
    }
}