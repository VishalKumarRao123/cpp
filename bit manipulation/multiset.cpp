#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
 multiset<int>ms;
 ms.insert(1);
 ms.insert(1);
 ms.insert(90);
 ms.insert(40);
 ms.insert(70);
 ms.insert(88);
 ms.insert(88);
 ms.insert(0);
 ms.erase(--ms.end());
 ms.erase(--ms.end());
 ms.erase(--ms.end());
 for(auto val : ms)
     cout<<val<<" ";
 return 0;
}
