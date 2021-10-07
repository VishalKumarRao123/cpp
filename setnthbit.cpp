#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
 int n=16;
 int i=4;
 if(n&(1<<i-1))
    cout<<"Already set hai";
 else{
   cout<<"set krna pda "<<(n|(1<<i-1));
 }
 return 0;
}
