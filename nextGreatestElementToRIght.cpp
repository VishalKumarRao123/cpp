#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
 int n;
 cin>>n;
 int v[n];
 for(int i=0;i<n;i++)
  cin>>v[i];
  stack<int>s;
  vector<int>ans;
  ans.push_back(-1);
  s.push(v[n-1]);
 for(int i=n-2;i>=0;i--){
           while(!s.empty()&&s.top()<=v[i])
                s.pop();
            if(s.empty())
                ans.push_back(-1);
            else{
             ans.push_back(s.top());
            }
            s.push(v[i]);
 }
 reverse(ans.begin(),ans.end());
 for(int i=0;i<n;i++){
    cout<<ans[i]<<" ";
 }
  stack<int>s1;
  vector<int>ans1;
  ans1.push_back(-1);
  s1.push(v[0]);
 for(int i=1;i<n;i++){
           while(!s1.empty()&&s1.top()<=v[i])
                s1.pop();
            if(s1.empty())
                ans1.push_back(-1);
            else{
             ans1.push_back(s1.top());
            }
            s1.push(v[i]);
 }
 cout<<endl;
 for(int i=0;i<n;i++){
    cout<<ans1[i]<<" ";
 }
 return 0;
}
