#include<bits/stdc++.h>
using namespace std;
int main()
{
 list<int>l{1,2,5,56,7,687,98,89,9};
 l.push_back(768);
 l.push_front(768);
 l.pop_front();
 l.pop_back();
 for(auto val : l)
   cout<<val<<" ";
 return 0;
}