#include<bits/stdc++.h>
using namespace std;
int main()
{
 unordered_map<int,int>um1;
 unordered_map<int,int>um2;
 um1[1]++;
 um1[2]++;
 um1[3]++;
 um1[1]++;
 um2[1]++;
 um2[2]++;
 um2[3]++;
 um2[1]++;
 um2[1]++;
 if(compare(um2,um1)
 cout<<"yes";
 else
 cout<<" nop";
 return 0;
}