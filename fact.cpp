#include<bits/stdc++.h>
using namespace std;
const int mod = 10e9+7;
int fact(int num){
        if(num==0)
          return  1;
        return (num*fact(num-1))%mod;
    }
int main(int argc, char const *argv[])
{
 int ans = fact(14)/fact(8);
 cout<<ans/fact(7);
 return 0;
}
