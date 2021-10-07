#include<bits/stdc++.h>
using namespace std;
void binary(int n){
 if(n==0)
    return ;
   bool b=n&1;
   binary(n>>1);
   cout<<b;
}
int main(int argc, char const *argv[])
{
 int n=1024,i=4;
 //find binary of the number n
 cout<<"Binary of "<<n<<" is : ";
 binary(n);
 //find nth bit
 cout<<endl;
 if(n&(1<<(i-1)))
   cout<<i<<"th bit is : 1";
 else
    cout<<i<<"th bit is : 0";
 //set nth bit
 if(n&(1<<(i-1)))
   cout<<i<<"th bit is already set";
 else{
     n=n|(1<<(i-1));
     cout<<"\nafter set "<<i<<"th bit ";
     binary(n);
    }
 //Unset nth bit
 n=n&~(1<<i-1);
 cout<<"\nAfter Unset "<<i<<"th bits ";
 binary(n);

 //Toggle nth bit

 n=n^(1<<i-1);
 cout<<"\nAfter Toogle "<<i<<"th bit ";
 binary(n);
 n=n^(1<<i-1);
 cout<<"\nAfter Toogle "<<i<<"th bit ";
 binary(n);
 
 //count number of set bits
 int count=0;
 for(int k=31;k>0;k--){
  if(n&(1<<k-1))
      count++;
 }
 cout<<"\n Number of set bits is : "<<count;
 return 0;
}
