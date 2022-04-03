#include<bits/stdc++.h>
using namespace std;

void solve()
{
    long long int n,k;
    cin>>n>>k;
    if(n > k)
        cout<<">"<<endl;
    else if(n < k)
        cout<<"<"<<endl;
    else
        cout<<"="<<endl;
}


int main()
{
    int t;
    cin>>t;
    while(t--)
        solve();
}
