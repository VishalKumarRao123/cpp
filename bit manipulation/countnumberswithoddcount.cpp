#include<bits/stdtr1c++.h>
using namespace std;
int main(int argc, char const *argv[])
{
 int arr[7]={1,1,2,2,2,2,24336};
 int res=0;
 for(int i=0;i<7;i++)
   res^=arr[i];
 cout<<res;
 return 0;
}
