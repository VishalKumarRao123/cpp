#include<bits/stdc++.h>
using namespace std;
vector<vector<int>> func(vector<int>v){
 vector<vector<int>>vv;
   int sbstsz=(1<<v.size());
   for(int i=0;i<sbstsz;++i){
    vector<int>vt;
    for(int j=v.size()-1;j>=0;--j){
     if(i&(1<<j))
         vt.push_back(v[j]);
    }
    vv.push_back(vt);
   }
   return vv;
}
int main(int argc, char const *argv[])
{
 vector<int>v{2,4,8,10};
 vector<vector<int>>vv;
   vv = func(v);
   for(auto val : vv){
   cout<<"[";
    for(auto valt : val)
        cout<<valt<<" ,";
    cout<<"]";
    cout<<endl;
   }
 return 0;
}
