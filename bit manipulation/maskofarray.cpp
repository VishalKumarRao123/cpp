#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
 int arr[5]={1,3,5,6,8};
 int n=0;
 for(int i=0;i<5;i++){
  n=(n|(1<<arr[i]));
 }
 for(int i=8;i>=0;--i){
  if((n&(1<<i)))
      cout<<i<<endl;
 }
 return 0;
}
