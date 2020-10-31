#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        unsigned long long int x,s=0,sum=0,div=0;
        cin>>x;
        for(int i=x; i>=3; i-=2)
        {
            div = i / 2;
            s = (i *2) + ((i-2)*2);
            sum += s * div;
        }
        cout<<sum<<endl;
    }
    return 0;
}
