#include<bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  cin>>t;
  vector<int>v;
  while(t--)
  {
   int n,d,h;
   cin>>n>>d>>h;
   int sum=0;
   for(int i=0;i<n;i++)
   {
    int ele;
    cin>>ele;
   if(ele<=0)
      sum-=d;
   else sum+=ele;
   if(sum>h)
    break;       
   }
   if(sum>h)
        cout<<"YES";
      else
      cout<<"NO";
    cout<<endl;
  }
  return 0;
}