#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n,ans=0,ans1=0;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++)
        cin>>arr[i];

    for(int i=0; i<n; i++)
    {
        if((i==n-1))
            ans = abs(arr[i] - arr[i-1]);

        else if(i==0)
            ans = abs(arr[i] - arr[i+1]);
        else
            ans = min(abs(arr[i] - arr[i-1]), abs(arr[i] - arr[i+1]));

        ans1 = max(abs(arr[i] - arr[0]),abs(arr[i] - arr[n-1]));
         cout<<ans<<" "<<ans1<<endl;
    }




}
