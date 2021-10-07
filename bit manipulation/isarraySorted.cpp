#include<bits/stdc++.h>
using namespace std;
void func(vector<int>v){
 if(v.size()==1){
  cout<<"Sorted !";
  return ;
 }

 int temp=v.back();
 v.pop_back();
 if(v.size()&&v.back()>temp){
    cout<<"Unsorted !";
    return ;}
 func(v);
}
int main(int argc, const char** argv) {
 vector<int>v{11,22,55,77,98};
 func(v);
    return 0;
}