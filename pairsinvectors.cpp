#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
 set<pair<int,int>>vp;
 vp.insert({1,2});
 vp.insert({3,5});
 vp.insert({1,4});
 for(auto val : vp)
     cout<<val.first<<" "<<val.second<<endl;
 return 0;
}



