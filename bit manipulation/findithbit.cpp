#include<bits/stdc++.h>
using namespace std;
int main(int argc, const char** argv) {
 int n;
 cin>>n;
 int i;
 cin>>i;
 int m=1<<(i-1);
 if(m&n)
    cout<<1;
 else
 cout<<0;
    return 0;
}