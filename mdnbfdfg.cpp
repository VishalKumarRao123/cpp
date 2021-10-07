#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
 /*calculate power of 2
 int p=10;
 int pw=(1<<p);
 cout<<pw;*/

 int count=0;
 int num=1024;
 while(num){
  num=num>>1;
  count++;
 }
 cout<<" 2 ka power "<<count;
 return 0;
}