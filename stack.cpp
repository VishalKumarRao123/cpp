#include<bits/stdc++.h>
using namespace std;
int main()
{
 queue<string>s;
 for(int i=0;i<5;i++)
 {
  string name;
  cin>>name;
    s.push(name);
 }
  cout<<endl<<endl<<s.size();
 while(!s.empty())
 {
    cout<<s.front()<<endl;
    s.pop();
 }

 return 0;
}