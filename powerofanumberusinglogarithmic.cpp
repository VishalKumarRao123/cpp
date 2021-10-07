#include<bits/stdc++.h>
using namespace std;
int power(int x,int n)
{
 if(n==0)
   return 1;
 int val =  power(x,n/2);
 int pval=val*val;
 if(n%2==1)
   pval=pval*x;
 return pval;
} 
int main()
{
   cout<<power(2,8);
   return 0;
}