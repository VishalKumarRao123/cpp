#include<bits/stdc++.h>
using namespace std;
int mid=0;
void find(vector<int>&v,int l,int h,int key){
 mid=(l+h)/2;
 cout<<"I am here  --  "<<mid<<endl;
 if(l>h){
  cout<<"Not Found !";
  return ;
 }
 if(v[mid]==key){
  cout<<key<<" is found !";
  return ;
 }
 if(key>v[mid])
    l=mid+1;
 else
   h=mid-1;
  find(v,l,h,key);
}
int main(int argc, char const *argv[])
{
  vector<int>v{2,4,6,7,8,12,34,67,89,0,34,56,88,45};
  sort(v.begin(),v.end());
    find(v,0,v.size()-1,145);
 return 0;
}
