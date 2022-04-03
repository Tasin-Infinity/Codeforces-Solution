#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,i=0;
    cin>>t;
    while(t--)
    {
        i++;
        float c,f,sum=0,ans=0;
        cin>>c>>f;
        sum = (((9*c) / 5) + 32 + f);
        ans = ((5*sum) - 160) / 9;
        printf("Case %d: %.2f\n",i,ans);
    }
}
