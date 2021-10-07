#include<bits/stdc++.h>
using namespace std;
int main(){
 int arr[8]={1,2,3,4,3,2,1};
 int res=0;
 for(int i=0;i<8;i++)
      res =  res ^ arr[i];
 cout<<res;
 return 0;
}
