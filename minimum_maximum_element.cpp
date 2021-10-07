#include<bits/stdc++.h>
using namespace std;
int main()
{
 int n;
 cin>>n;
 vector<int>v;
 for(int i=0;i<n;i++)
 {
  int ele;
  cin>>ele;
  v.push_back(ele);
 }
 auto it = max_element(v.begin(),v.end());
 cout<<*it;
 cout<<endl<<accumulate(v.begin(),v.end(),0);
 reverse(v.begin(),v.end());
 cout<<endl;
 for(auto val :v)
  cout<<val<<" ";
  int ele;
 cout<<"Enter element to find :-";
 cin>>ele;
 it = find(v.begin(),v.end(),ele);
 if(it!=v.end())
  cout<<*it;
 else
  cout<<"Not found!";
 return 0;
}