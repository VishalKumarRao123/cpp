#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n,m,q;
	    cin>>n>>m>>q;
	    int qr[q];
	    for(int i=0;i<q;i++)
	    {
            string str;
	        cin>>str;
	        int x=stoi(str);
	        qr[i]=x;
        }
	    int arr[n+1];
	    for(int i=0;i<=n;i++)
	          arr[i]=0;
	    int count=0,p=0;
	    for(int i=0;i<q;i++){
	        int val=qr[i];
	       if(arr[abs(val)]==-1||arr[abs(val)]>1)
	        {
	            cout<<"Inconsistent";
	            p=1;
	            break;
	        }
	       else if(val>0)
	       {
	           arr[val]=arr[val]+1;
	           count++;
	       }
	        
	      
	      else if(val<0){
	          val=val*(-1);
	          if(arr[val]==1){
	              arr[val]=-1;
	              count--;
	          }
	          else{
	              cout<<"Inconsistent";
	              p=1;
	              break;
	          }
	      }
	     if(count>m){
	          cout<<"Inconsistent";
	          p=1;
	          break;
	      }
	    }
	    if(p==0)
	      cout<<"Consistent";
	    cout<<endl;
	}
	return 0;
}
