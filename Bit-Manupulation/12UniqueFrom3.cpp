#include<iostream>
using namespace std;
int unique(int arr[],int n){
    int tn = INT16_MAX;
    int tn1 = 0,tn2 = 0;
    for(int i=0;i<n;i++){
        int ctn = arr[i]&tn;
        int ctn1 = arr[i]&tn1;
        int ctn2 = arr[i]&tn2;

        tn = tn & (~ctn);
        tn1 = tn1 | ctn;
        
        tn1 = tn1 & (~ctn1);
        tn2 = tn2 | ctn1;

        tn2 = tn2 & (~ctn2);
        tn = tn | ctn2;
    }

    return tn1;
}
int main(){
    int arr[10]={12,12,12,13,87,13,13,55,55,55};
    cout<<unique(arr,10);

}