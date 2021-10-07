#include<bits/stdc++.h>
using namespace std;
void binary(int n){
    for(int i=10;i>=0;--i){
     cout<<((n>>i)&1);
    }
}
int main(int argc, char const *argv[])
{
 int n=0;
 n=n|(1<<4);
 cout<<n<<" : ";
 binary(n);
 cout<<endl;
 n=n|(1<<2);
 cout<<n<<" : ";
 binary(n);
 cout<<endl;
 n=n|(1<<7);
 cout<<n<<" : ";
 binary(n);
 return 0;
}
