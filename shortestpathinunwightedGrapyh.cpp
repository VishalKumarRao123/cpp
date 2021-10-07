#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
 int V,E;
 //cout<<"Enter Number of Vertex and Edges : ";
 cin>>V>>E;
 vector<int>adj[V];
 for(int i=0;i<E;i++){
      //cout<<"Enter Adjecents of "<<i<<" : "<<endl;
      int u,v;
      cin>>u>>v;
      adj[u].push_back(v);
      adj[v].push_back(u);
 }
 for(int i=0;i<V;i++){
  cout<<i<<"--> ";
  for(auto it : adj[i])
     cout<<it<<" ";
     cout<<endl;
 }
 for(int j=0;j<V;j++){
 vector<int>dis(V,10000);
 queue<int>q;
 dis[j]=0;
 q.push(j);
 while(!q.empty()){
  int node = q.front();
  q.pop();
  for(auto val : adj[node]){
   if(dis[node]+1<dis[val]){
       dis[val]=dis[node]+1;
       q.push(val);
   }
  }
 }
 for(int i=0;i<V;i++){
  cout<<j<<"--->"<<i<<" = "<<dis[i]<<endl;
 }
 cout<<endl;}
 return 0;
}
