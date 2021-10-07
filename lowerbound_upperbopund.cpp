#include<bits/stdc++.h>
using namespace std;
int main()
{
 int n;
 cin>>n;
 int arr[n];
 for(int i=0;i<n;i++){
  cin>>arr[i];
 }
 int ele;
 cin>>ele;
 int *ptr = upper_bound(arr,arr+n,ele);
 if(ptr!=arr+n)
   cout<<*ptr;
   else
   cout<<"not Found!";
 return 0;
}