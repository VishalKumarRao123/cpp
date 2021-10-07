#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
 map<int,vector<int>>vi;
     vi[0].push_back(5);
     vi[0].push_back(2);
     vi[2].push_back(5);
     vi[1].push_back(9);
     for(auto val : vi){
      for(auto val1 : val.second)
           cout<<val.first<<" "<<val1<<endl;
     }
 return 0;
}
