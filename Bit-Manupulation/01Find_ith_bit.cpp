#include<iostream>
using namespace std;
int FindBit(int n,int pos){
    return((n & (1<<pos))!=0);
}
int main(){

    cout<<FindBit(10,3);
    
}