#include<bits/stdc++.h>
using namespace std;
 vector<int> nextGreaterElements(vector<int>& A) {
        int n = A.size();
        vector<int> stack, res(n, -1);
        for (int i = 0; i < n * 2; ++i) {
            while (stack.size() && A[stack.back()] < A[i % n]) {
                res[stack.back()] = A[i % n];
                stack.pop_back();
            }
            stack.push_back(i % n);
        }
        return res;
    }
int main()
{
 vector<int>v;
 int n=6;
 while(n--)
 {
  int ele;
  cin>>ele;
  v.push_back(ele);
 }
 
 vector<int>vec;
 vec=nextGreaterElements(v);
 for(int val : vec )
  cout<<val<<" ";
 return 0;
}