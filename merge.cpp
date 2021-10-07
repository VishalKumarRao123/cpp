#include<bits/stdc++.h>
using namespace std;
void merge(int arr[],int l,int mid,int h){
// cout<<"i am here";
 int n1=mid-l+1;
 int n2=h-mid;
 int a[n1],b[n2];
 for(int i=0;i<n1;i++)
    a[i]=arr[l+i];
 for(int i=0;i<n2;i++)
    b[i]=arr[mid+1+i];
 int i=0,j=0,k=l;
 while(i<n1&&j<n2){
  if(a[i]<b[j]){
     arr[k++]=a[i++];
  }  
  else{
 arr[k]=b[j];
 k++;
 j++;
  }
   
 }
 while(i<n1){
    arr[k]=a[i];
    k++;
    i++;
 }
     
 while(j<n2)
   {
    arr[k]=b[j];
    k++;
    j++;
   }
}
void mergesort(int arr[],int l,int h){
 //cout<<"i am calling ";
 if(l<h){
  int mid = (l+h)/2;
  mergesort(arr,l,mid);
  mergesort(arr,mid+1,h);
  merge(arr,l,mid,h);
 }
}
int main(int argc, char const *argv[])
{
 int arr[12]={23,45,67,2,34,54,5676,0,-546,4,678,8};
 mergesort(arr,0,11);
 for(int i=0;i<12;i++)
    cout<<arr[i]<<" ";
 return 0;
}
