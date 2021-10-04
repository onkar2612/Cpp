
#include <bits/stdc++.h>
using namespace std;


void reverse_string(string str)
{
	int size=str.size();
    if(size==0){
    return;
    }
    else if(size==1){
    cout<<str;
    }
    else{
    reverse_string(str.substr(1));
    cout<<str[0];
    }

}

int main()
{
	string str;
    cout<<"Enter a string: ";
    cin>>str;
	reverse_string(str);
	return 0;
}

