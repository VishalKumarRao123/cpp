#include<bits/stdc++.h>
using namespace std;
void func(int n){
 if(n==0)
     return;
 bool b=n&1;
 func(n>>1);
 cout<<b;
}
int main(int argc, char const *argv[])
{
 for(int i=1;i<10;i++){
  
   cout<<i<<" ---> ";
   func(i);
   cout<<endl;
 }
 
 return 0;
}
