#include<bits/stdc++.h>
using namespace std;
void binary(int n){
 cout<<char(n)<<" : ";
 for(int i=7;i>=0;--i){
  cout<<((n>>i)&1);
  
 }
 cout<<endl;
}
int main(int argc, char const *argv[])
{
 for(char ch='A';ch<='E';ch++){
    binary(int(ch));  
    }
    cout<<endl;
    for(char ch='a';ch<='e';ch++){
    binary(int(ch));
    }
    cout<<endl;
 for(char ch='A';ch<='E';ch++){
    binary(int(ch));  
    binary(int(ch)|(' '));
    }
    cout<<endl;
 for(char ch='a';ch<='e';ch++){
    binary(int(ch));
    binary(int(ch)&(~(1<<5)));
    binary(int(ch)&('_'));
    }
 return 0;
}
