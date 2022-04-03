#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t,i=0;
    cin>>t;
    string str;
    map<string, int> mp;
    mp["a"] = 1;
    mp["b"] = 2;
    mp["c"] = 3;
    mp["d"] = 1;
    mp["e"] = 2;
    mp["f"] = 3;
    mp["g"] = 1;
    mp["h"] = 2;
    mp["i"] = 3;
    mp["j"] = 1;
    mp["k"] = 2;
    mp["l"] = 3;
    mp["m"] = 1;
    mp["n"] = 2;
    mp["o"] = 3;
    mp["p"] = 1;
    mp["q"] = 2;
    mp["r"] = 3;
    mp["s"] = 4;
    mp["t"] = 1;
    mp["u"] = 2;
    mp["v"] = 3;
    mp["w"] = 1;
    mp["x"] = 2;
    mp["y"] = 3;
    mp["z"] = 4;
    cin.ignore();
    while(t--)
    {
        i++;
        getline(cin,str);
        int len = str.size(),ans=0;
        string c;
        for(int i=0; i<len; i++)
        {
            c = str[i];
            if(c == " ")
                ans+=1;
            else
                ans += mp[c];
        }
        cout<<"Case #"<<i<<": "<<ans<<endl;
    }
}
