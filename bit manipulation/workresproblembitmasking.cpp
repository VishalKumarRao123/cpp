#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
 int n=5;
 vector<int>v(n,0);
 for(int i=0;i<5;i++){
  //cout<<"\nEnter No of days for "<<i+1<<"  day : ";
  int nod;
  cin>>nod;
  for(int j=0;j<nod;j++){
     // cout<<"enter day no :-";
      int dn;
      cin>>dn;
     v[i]=(v[i]|(1<<dn));
  }
 }
 int mx=-1,d1=0,d2=0;
 for(int i=0;i<4;i++){
  for(int j=i+1;j<5;j++){
   if(v[i]&v[j]){
    int intersection=__builtin_popcount(v[i]&v[j]);
    if(intersection>mx){
     mx=intersection;
     d1=i+1;
     d2=j+1;
    }
    cout<<i+1<<" ,"<<j+1<<" : "<<intersection<<endl;
   }
      
  }
 }
 cout<<endl<<d1<<" , "<<d2<<" : "<<mx;
 return 0;
}
