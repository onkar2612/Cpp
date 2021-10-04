#include<iostream>
using namespace std;
int main()
{
    int n;
    int a=65;
    cout<<"Enter size of pyramid: ";
    cin>>n;
    for(int i=n;i>=1;i--){
        for(int j=1;j<=i;j++){
            cout<<j<<" ";
        }
        cout<<endl;
        a+=1;
    }
    
} // namespace std;
