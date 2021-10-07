#include<bits/stdc++.h>
using namespace std;
int main(int argc, const char** argv) {
 map<string,int>m;
 int n;
 cout<<"How many words you want to enter :-";
 cin>>n;
 while(n--)
 {
  string str;
  cin>>str;
  m[str]++;
 }
 for(auto value : m)
  cout<<value.first<<" "<<value.second<<endl;
    return 0;
}