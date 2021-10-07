#include<bits/stdc++.h>
using namespace std;
int main()
{
 int n;
 cin>>n;
 unordered_map<int,int>s;
 for(int i=0;i<n;i++)
 {
  int ele;
  cin>>ele;
  s[ele];
 }
 auto it = max_element(s.begin(),s.end());
 cout<<it->first;
 cout<<"Enter element to search :-";
 int ele;
 cin>>ele;
 it = s.find(ele);
 if(it!=s.end())
 cout<<it->first;
 else
 cout<<"Not Found !";
 cout<<endl<<"After Reversing :\n";
 
 return 0;
}