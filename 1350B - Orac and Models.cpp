#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int t;
    cin>>t;
    while(t--)
    {
        long long int n,f=0;
        cin>>n;
        long long int s[n+1];
        long long int ans[n+1];
        for(int i=1; i<=n; i++)
        {
            ans[i] = 1;
            cin>>s[i];
        }

        for(int i=1; i<=n; i++)
        {
            for(int j=i+i; j<=n; j+=i)
            {
                //cout<<j<<" ";
                if(s[i]<s[j])
                {
                     ans[j] = max(ans[j],ans[i]+1);
                    // cout<<ans[j] <<"= max ="<<ans[j]<<" "<<ans[i]+1<<" new ";
                }

            }
        }
        sort(ans+1,ans+(n+1));
        cout<<ans[n]<<endl;
    }
    return 0;
}
