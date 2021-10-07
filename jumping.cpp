#include<bits/stdc++.h>
using  namespace std;
void cal(int *arr,int n)
{
	unordered_map<int,int>um;
	stack<int>s;
	for(int i=n-1;i>=0;i--)
	{
		if(!s.empty())
		{
			if(s.top()>arr[i])
				um[arr[i]]=s.top();
			else{
				while(!s.empty()&&s.top()<=arr[i])
					s.pop();
				if(!s.empty())
					um[arr[i]]=s.top();
				else
					um[arr[i]]=-1;
			}
		}
		else
		 um[arr[i]]=-1;
		s.push(arr[i]);
	}
	for(auto ele : um)
	  cout<<ele.first<<" "<<ele.second<<endl;

  cout<<"8 "<<um[8];
  cout<<"1 "<<um[1];
}
int main()
{
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
		cin>>arr[i];
	cal(arr,n);
	return 0;
}