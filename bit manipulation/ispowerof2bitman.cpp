#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
 int n=17;
 double d=log(n)/log(2);
 if(d-int(d)==0)
    cout<<"power of 2";
 if(n&(n-1))
   cout<<"Not Power of 2";
  else
    cout<<" power of 2";
 return 0;
}
