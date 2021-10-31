#include<iostream>
using namespace std;

int FindNum(int n, int n1){
    int n2 = n^n1,i=0;
    while(n2==0){

        // if((n2>>0)==1){
        //     i++;
        // }
        // i++;

        cout<<(n2>>1);
    }
    return i;
}
int main(){

    cout<<FindNum(22,27);

}