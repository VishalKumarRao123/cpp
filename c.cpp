#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    unordered_map<int,int>um;
	    int a,b,c,d;
	    cin>>a>>b>>c>>d;
	    um[a]++;
	    um[b]++;
	    um[c]++;
	    um[d]++;
	    int s=um.size();
	    if(s==1)
	      cout<<0<<endl;
	    else if(s==2){
	        if((um[0].second==2&&um[1].second==2)
	            cout<<2<<endl;
	        else
	          cout<<1<<endl;
	    }
	    else if(s==3)
	        cout<<2<<endl;
	    else 
	    cout<<0<<endl;
	   
	}
	return 0;
}
