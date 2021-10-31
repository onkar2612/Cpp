#include<iostream>
using namespace std;
// int ones(int n){
//     int count=0;
//     while (n)
//     {
//         int m = n&1;
//         if(m!=0){
//             count++;
//         }
//         n=n>>1;
//     }
//     return count;
    
// }

int ones(int n){
    int count = 0;
    while(n){
        n = n&(n-1);
        count++;
    }
    return count;
}

int main(){
    cout<<ones(19);
}