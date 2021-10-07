#include<bits/stdc++.h>
using  namespace std;
int partition(int arr[] , int l,int h,int &count){
 count++;
   int i=l,j=h;
   int pivot=arr[l];
   while(i<j){
    do{
     i++;
    }while(arr[i]<=pivot);
    do{
     j--;
    }while(arr[j]>pivot);
   
   if(i<j)
      swap(arr[i],arr[j]);}
   swap(arr[j],arr[l]);
   return j;
}
void quickSort(int arr[] , int l,int h,int &count){
 count++;
 if(l<h){
 int j =  partition(arr,l,h,count);
 quickSort(arr,l,j,count);
 quickSort(arr,j+1,h,count);
 }
}
int main(int argc, char const *argv[])
{
 int count=0;
 int arr[11]={7,21,90,72,60};
 quickSort(arr,0,4,count);
 for(int i=0;i<5;i++)
    cout<<arr[i]<<" ";
 cout<<"\n"<<count<<" steps !";
 return 0;
}
