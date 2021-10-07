#include<bits/stdc++.h>
using namespace std;
int isBalance(string str)
{
 unordered_map<char,int>um={{'[',-1},{'{',-2},{'(',-3},{']',1},{'}',2},{')',3},};
 stack<char>st;
 for (auto ch : str)
 {
   if(um[ch]<0)
     st.push(um[ch]);
   else
   {
     if(st.empty())
       return 0;
      else{
        int t = st.top();
        st.pop();
        if(t+um[ch]!=0)
           return 0;
      }
   }
   
 }
 if(st.size()>0)
     return 0;
 return 1;
}
int main()
{
 string str;
 cin>>str;
 if(isBalance(str))
   cout<<"yes"<<endl;
  else
    cout<<"No";
 return 0;
}