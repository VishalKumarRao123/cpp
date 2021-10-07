#include<bits/stdc++.h>
using namespace std;
int gcd(int a,int b){
 if(a==0)
   return b;
 if(b==0)
    return a;
 if(b%a==0)
    return a;
 return gcd(b,a%b);
}
int main(int argc, char const *argv[])
{
 int a=12,b=18;
 cout<<gcd(a,b);
 cout<<endl;
 cout<<gcd(19,0);
 cout<<endl;
 cout<<gcd(0,17);
 cout<<endl;
 cout<<gcd(18,12);
 return 0; 
}



