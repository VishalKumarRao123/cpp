#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
     int n,l,r;
     cin>>n>>l>>r;
     int mn=10000,ans;
     while(l<=r){
      int m=n;
      int sum=0;
      while(m){
       sum+=m%l;
       m/=l;
      }
      if(sum<mn){
       mn=sum;
       ans=l;
      }
      l++;
     }
  cout<<ans<<endl;
	}
	return 0;
}
