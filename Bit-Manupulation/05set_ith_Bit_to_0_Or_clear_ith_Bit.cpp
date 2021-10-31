#include<iostream>
using namespace std;
int ChangeBit(int n, int i){
    return(n & (~(1<<i)));
}
int main(){
    cout<<ChangeBit(10,1);
}