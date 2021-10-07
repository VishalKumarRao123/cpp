#include<bits/stdc++.h> 
using namespace std; 
int main(){ 
int a; 
char res[1000]; 
//string res;
cin>>a; 
itoa(a,res,2); 
cout<<res<<endl;
int sum=0,i;
for(i=0;res[i]!=NULL;i++);
cout<<"length="<<i<<endl;
for(int j=0;j<i;j=j+2)
{ sum=sum+(int)res[j]-48;
  cout<<res[j]<<" ";
}
cout<<"sum"<<sum;
return 0; 
} 