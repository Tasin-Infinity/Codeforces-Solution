#include<bits/stdc++.h>
using namespace std;

void solve()
{
    string str;
    cin>>str;
    int len = str.size(),cnt=0,cnt1=0,s=0;
    for(int i=0; i<len; i++)
    {
        if(str[i]=='1')
            cnt++;
        else
            cnt1++;
    }
    if(cnt>0 && cnt1>0)
    {
        s = min(cnt,cnt1);
        if(s % 2 != 0)
            cout<<"DA"<<endl;
        else
            cout<<"NET"<<endl;
    }
    else
        cout<<"NET"<<endl;

}
int main()
{
    int t;
    cin>>t;
    while(t--)
        solve();
}
