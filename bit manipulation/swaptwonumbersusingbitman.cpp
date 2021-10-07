#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
 int a=6,b=12;
 a=a^b;
 b=b^a;
 a=a^b;
 cout<<a<<b;
 return 0;
}
