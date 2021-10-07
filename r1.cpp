#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
 cout<<"hi";
 int arr[10]={-54,23,45,56,6,767,7,87,889,89};
 for(int i=0;i<10;i++)
     cout<<arr[i]<<" ";
 int min;
 cout<<endl;
 for(int i=0;i<9;i++){
 // cout<<" insdkg";
      min=i;
      for(int j=i+1;j<10;j++){
       //cout<<"aur inside";
       if(arr[j]<arr[min])
            min=j;
    }
    cout<<arr[min]<<" ";
    swap(arr[i],arr[min]);
 }
 return 0;
}
