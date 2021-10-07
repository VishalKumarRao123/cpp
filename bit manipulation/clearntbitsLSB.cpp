#include<bits/stdc++.h>
using namespace std;
void binary(int n){
 cout<<n<<" : ";
 for(int i=10;i>=0;i--){
  cout<<((n>>i)&1);
 }
 cout<<endl;
}
int main(int argc, char const *argv[])
{
 int n=59;
 binary(n);
 //clear from lsb
 int b = (n&~((1<<4)-1));
 binary(b);
 //clear from msb
  b=(n&((1<<4)-1));
  binary(b);
 return 0;
}
