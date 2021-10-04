#include<iostream>
using namespace std;
int main(){
    char c,c1,c2;
    cout<<"Enter a Alphabate: ";
    cin>>c;
    c1=(c=='a'||c=='e'||c=='i'||c=='o'||c=='u');
    c2=(c=='A'||c=='E'||c=='I'||c=='O'||c=='U');
    if(!isalpha(c))
        cout<<"Please Enter a Alphabate";
    else if (c1 || c2)
    
        cout<<"Alphabate is vowel";
    
    else
        cout<<"Alphabate is not vowel";
    
}