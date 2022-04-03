#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n,i=0;
    while(cin>>n)
    {
        i++;
        if(i != 1)
          cout<<endl;
        if(n == 0)
            break;

        vector<int> v;
        int sum =0,ans=0;
        for(int i=0; i<n; i++)
        {
            int x;
            cin>>x;
            v.push_back(x);
            sum += x;
        }
        sum = sum / n;
        for(int i=0; i<n; i++)
            ans += abs(sum - v[i]);
        cout<<"Set #"<<i<<endl;
        cout<<"The minimum number of moves is "<<ans/2<<"."<<endl;
    }
}
