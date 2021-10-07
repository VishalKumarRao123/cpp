#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n;
  cin>>n;
  int c=0;
  double arr[n];
  for(int i=0;i<n;i++)
   cin>>arr[i];
   for(int i=0;i<n;i++)
   {
    for(int j=0;j<n;j++)
    {
     if(i!=j){
       double fst = (arr[i]-arr[j])/arr[i];
       double scnd = (arr[i]-arr[j])/arr[j];
       if(fst<scnd)
         c++;
     }
    }
 }
 cout<<c;
 return 0;
}