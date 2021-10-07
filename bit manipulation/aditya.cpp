#include<bits/stdc++.h>
using namespace std;
int main()
{
    int testcase;
    cin>>testcase;
    while(testcase--)
    {
        int  n;
        cin>>n;
        unordered_map<int,int>um;
        while(n>0){
         int e = int(log(n)/log(5));
         auto it=um.find(e);
         if(it==um.end()){
         n=n-pow(5,e);
         um[e]++;
         }
         else
         {
          cout<<"FAILED";
          break;
         }
        
        }
        if(n==0){
          cout<<"PASSED";}
         cout<<endl;
    }
    return 0;
}