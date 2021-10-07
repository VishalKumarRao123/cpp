#include<bits/stdc++.h>
using  namespace std;
void find(vector<int>&v,int n,int key){
 sort(v.begin(),v.end());
 int l=0,h=n-1,mid;
 while (l<=h){
  mid=(l+h)/2;
  if(v[mid]==key){
   cout<<key<<"is Found";
   break;
  }
  if(key>v[mid])
   l=mid+1;
  else 
   h=mid-1;
 }
 if(l>h)
   cout<<"Not Found !";
}
 int main(int argc, const char** argv) {
    vector<int>v{2,4,6,7,8,12,34,67,89,0,34,56,88,45};
    find(v,v.size(),55);
    return 0;
}