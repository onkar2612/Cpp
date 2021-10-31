#include<iostream>
using namespace std;
int main(){

    int a=4;
    int b=5;

    a=a^b; // it means 100^101 = 001  
    b=a^b; // it means 001^101 = 100 = 4
    a=a^b; // it means 001^100 = 101 = 5

    cout<<a<<endl<<b;

}