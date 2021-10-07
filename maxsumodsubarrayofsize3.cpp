#include<bits/stdc++.h>
using namespace std;
int main()
{
 vector<int> v {12,1,6,-7,18,4,6,8,3,2,15};
 int size=3,i=0,j=0,sum=0,mx;
 for(j=0;j<size;j++)
     sum+=v[j];
     j--;
 mx=sum;
 cout<<sum<<" ";
 while(j<v.size()-1)
 {
   sum-=v[i];
   i++;
   j++;
   sum+=v[j];
   cout<<sum<<" ";
   mx=max(sum,mx);
 }
 cout<<endl<<"maximum is :-"<<mx;
 return 0;
}