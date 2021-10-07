#include<bits/stdc++.h>
using namespace std;
bool isSafe(int arr[][10],int i,int j,int  n,int solArr[][10]){
   return i>-1&&j>-1&&i<n&&j<n&&arr[i][j]&&!solArr[i][j];
}
int shortestPath(int arr[][10],int i,int j,int x,int y,int n,int solArr[][10]){
 if(!isSafe(arr,i,j,n,solArr))
    return 10000;
 if(i==x&&j==y)
   return 0;
     solArr[i][j]=1;
   int left = shortestPath(arr,i,j-1,x,y,n,solArr)+1;
   int down = shortestPath(arr,i+1,j,x,y,n,solArr)+1;
   int right = shortestPath(arr,i,j+1,x,y,n,solArr)+1;
    int up = shortestPath(arr,i-1,j,x,y,n,solArr)+1;
   solArr[i][j]=0;
   return min(min(left,down) ,min(up,right));
}
int main(){
 int arr[10][10]={
  {1,1,1,1,1,0,0,1,1,1},
  {0,1,1,1,1,1,0,1,0,1},
  {0,0,1,0,1,1,1,0,0,1},
  {1,0,1,1,1,0,1,1,0,1},
  {0,0,0,1,0,0,0,1,0,1},
  {1,0,1,1,1,0,0,1,1,0},
  {0,0,0,0,1,0,0,1,0,1},
  {0,1,1,1,1,1,1,1,0,0},
  {1,1,1,1,1,0,0,1,1,1},
  {0,0,1,0,0,1,1,0,0,1}
 };
 int solArr[10][10];
 for(int i=0;i<10;i++){
  for(int j=0;j<10;j++)
       solArr[i][j]=0;
 }
 cout<<endl;
 for(int i=0;i<10;i++){
  for(int j=0;j<10;j++)
       cout<<arr[i][j]<<" ";
      cout<<endl;
 }
 cout<<endl;
 for(int i=0;i<10;i++){
  for(int j=0;j<10;j++)
       cout<<solArr[i][j]<<" ";
      cout<<endl;
 }
 cout<<endl;

 int res = shortestPath(arr,0,0,7,9,10,solArr);
 if(res>10000)
   cout<<"No path Possible";
 else
   cout<<res;
 return 0;
}