#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,sum=0,res=0;
        cin>>n;
        map<string, int> mp;
        for(int i=1; i<=n; i++)
        {
            stringstream ss;
            ss<<i;
            string str,c;
            ss>>str;
            for(int j=0; j<str.size(); j++)
            {
                c = str[j];
                mp[c]++;
            }
        }
        for(int i=0; i<=9; i++)
        {
            stringstream ss1;
            ss1<<i;
            string str2;
            ss1>>str2;
            if(i !=9)
            cout<<mp[str2]<<" ";
            else
            cout<<mp[str2];
        }
        cout<<endl;
        mp.clear();
    }
}
