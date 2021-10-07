#include<bits/stdc++.h>
using namespace std;
int main(){
 int n;
 cin>>n;
 // if(n&1)
 //    cout<<"odd";
 // else
 //  cout<<"even";
 int m;
 cin>>m;
 n=n^m;
 m=n^m;
 n=n^m;
 cout<<n<<" "<<m;
 return 0;
}