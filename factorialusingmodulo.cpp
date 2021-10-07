#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
 int n=33,M=47;
 long long int fact=1;
 for(int i=2;i<=n;i++)
    fact=(fact*i)%M;
 cout<<"Factorial is : "<<fact;
 return 0;
}
