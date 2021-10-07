#include<bits/stdc++.h>
using namespace std;
void print(set<string>&s)
{
 for(auto val : s)
   cout<<val<<endl;
   cout<<endl;
  for(auto it = s.begin();it!=s.end();it++)
    cout<<*it<<endl; 
  }
int main()
{
 set<string>s;
 s.insert("Vishal");
 s.insert("Ankit");
 s.insert("Manish");
 s.insert("Manish");
 s.insert("Manish");
 s.insert("Sonu");
 s.insert("Sonu");
 s.insert("Soni");
 s.insert("moni");
 print(s);
 return 0;
}