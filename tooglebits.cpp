#include<bits/stdc++.h>
using namespace   std;
int nob=0;
void binary(int n){
 if(!n)
   return;
 bool b=n&1;
 nob++;
 binary(n>>1);
 cout<<b;
}
int main(int argc, char const *argv[])
{
 int n=19;
 int m=n;
 binary(n);
 return 0;
}
