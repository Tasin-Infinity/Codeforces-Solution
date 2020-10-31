#include<bits/stdc++.h>
using namespace std;

int main()
{
    int x,y;
    cin>>x>>y;
    map<int ,int> mp;
    int aray[x],aray1[y],res[x];
    for(int i=0; i<x; i++)
    {
        cin>>aray[i];
    }
    for(int i=0; i<y; i++)
    {
        cin>>aray1[i];
    }
    for(int i=x-1; i>=0; i--)
    {
        mp[aray[i]] = 1;
        res[i] = mp.size();
    }
    for(int i=0; i<y; i++)
    {
        cout<<res[aray1[i]-1]<<endl;
    }

}
