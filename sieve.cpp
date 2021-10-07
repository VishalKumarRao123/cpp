#include<bits/stdc++.h>
using namespace std;
const int N=1e7+10;
vector<bool>v(N,true);
int main(int argc, char const *argv[])
{
 v[0]=v[1]=false;
 int c=0;
 for(int i=2;i*i<=N;i++){
     if(v[i]==true){
      c++;
      for(int j=i*2;j<=N;j=j+i){
       v[j]=false;
      }
     } 
  }
 for(int i=0;i<=N;i++)
 {
  if(v[i])
      cout<<i<<" ";
 }
  cout<<endl<<c; 
 return 0;
}



