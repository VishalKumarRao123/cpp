#include<bits/stdc++.h>
using namespace std;
unordered_map<int,string>um;
vector<string>v;
void func(int n){
 if(n==0)
    return ;
 func(n/10);
 v.push_back(um[n%10]);
}
int main(){
 int n;
 cin>>n;
 um[0]="zero";
 um[1]="one";
 um[2]="two";
 um[3]="three";
 um[4]="four";
 um[5]="five";
 um[6]="six";
 um[7]="seven";
 um[8]="eight";
 um[9]="nine";
 func(n);
 for(auto str : v)
 cout<<str<<" ";
 return 0;
}