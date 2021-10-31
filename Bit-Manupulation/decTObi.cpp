#include<iostream>
using namespace std; 
// int decTObi(int n){
//     int ans = 0;
//     while(n!=0){
//         int rem = n%2;
//         cout<<rem;
//         // ans = ans*10+rem;
//         n/=10;
//     }
    
// return ans;

// }

int main(){
    int n,ans=0;
    cin>>n;
    while(n!=0){
       if(n%2==0){
           ans = ans*10 + 0;
       }
       else if(n%2==1){
           ans = ans*10 + 1;
       }
       n/=2;       
    }
    int result = 0;
   while(ans!=0){
       int rem = ans%10;
       result = result *10 + rem;
       ans/=10;
   }
   cout<<result;
    
}
