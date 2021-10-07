#include<bits/stdc++.h>
using namespace std;
void reverse(string &s,int l,int r)
{
 if(l>=r)
   return ;
   swap(s[l],s[r]);
   cout<<s<<" ";
 reverse(s,l+1,r-1);
}
int main()
{
 string str;
 cin>>str;
 reverse(str,0,str.size()-1);
 cout<<endl<<str;
 return 0;
}