#include<bits/stdc++.h>
using namespace std;
int gcd(int a,int b ){
 if(a==0)
    return b;
 return  gcd(a,b%a);
}
int main(int argc, char const *argv[])
{
 cout<<gcd(0,10);
 return 0;
}
