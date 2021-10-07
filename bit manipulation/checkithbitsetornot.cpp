#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
 int n=16,i=5;
 // if((n>>i-1)&1)
 //     cout<<"set hai";
 // else 
 //    cout<<"unset h";
 if(n&(1<<i-1))
    cout<<"set hai";
  else
    cout<<"bhk bsdk";
 return 0;
}
