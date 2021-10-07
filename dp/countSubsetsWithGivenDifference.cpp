#include<bits/stdc++.h>
using namespace std;
int func(int arr[],int n,int sum){
 int t[n+1][sum+1];
 for(int i=0;i<n+1;i++){
  for(int j=0;j<sum+1;j++){
   if(i==0)
   t[i][j]=0;
   if(j==0)
   t[i][j]=1;
   }
 }
 for(int i=1;i<n+1;i++){
  for(int j=1;j<sum+1;j++){
   if(arr[i-1]<=j)
     t[i][j]=t[i-1][j-arr[i-1]]+t[i-1][j];
   else
   t[i][j] = t[i-1][j];
  }
 }
 return t[n][sum];
}
int main(int argc, char const *argv[])
{
 int n,diff;
 cin>>n>>diff;
 int arr[n],sum=0;
 for(int i=0;i<n;i++){
   cin>>arr[i];
   sum+=arr[i];
 }
 int s = (diff+sum)/2;
 cout<<"No. of Subsets :-"<<func(arr,n,s);
 return 0;
}
