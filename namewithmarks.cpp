#include<bits/stdc++.h>
using namespace std;
int main()
{
     int n;
        cin>>n;
        map<int,set<string>>m;
        for(int i=0;i<n;i++)
        {
         
            string name;
            cin>>name;
            int marks;
            cin>>marks;
            m[marks].insert(name);
        }

    auto last_it = (--m.end());
    while(last_it!=m.begin())
    {
       auto it  = last_it->second;
       for(auto val : it)
       {
        cout<<val<<" "<<last_it->first<<endl;
       }
       last_it--;
    }
    auto itr = last_it->second;
     for(auto val :itr )
        cout<<val<<" "<<last_it->first<<endl;
    return 0;
}