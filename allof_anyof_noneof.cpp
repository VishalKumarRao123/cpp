#include <bits/stdc++.h>
using namespace std;
bool is_pos(int x)
{
 return x > 0;
}
int main()
{
 int n;
 cin >> n;
 vector<int> v;
 for (int i = 0; i < n; i++)
 {
  int ele;
  cin >> ele;
  v.push_back(ele);
 }
 cout << all_of(v.begin(), v.end(), is_pos);
 return 0;
}