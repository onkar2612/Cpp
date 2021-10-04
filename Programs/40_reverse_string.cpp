#include<iostream>
#include<string.h>
using namespace std;
int main(){
    string st;
    cout<<"Enter a string: ";
    cin>>st;
 int size = st.length();
 for(int i=(size-1);i>=0;i--){
     cout<<st[i];
 }
  

}