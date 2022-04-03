#include<bits/stdc++.h>
using namespace std;

void solve()
{
    string str;
    cin>>str;
    int cnt_AB = 0,cnt_BA = 0;
    for(int i=0; i<str.size()-1; i++)
    {
        if(str[i] == 'a' && str[i+1] == 'b')
            cnt_AB++;
        else if(str[i] == 'b' && str[i+1] == 'a')
            cnt_BA++;

    }
    if(cnt_AB == cnt_BA)
    {
        cout<<str<<endl;
        return;
    }
    int len = str.size();
    if(cnt_AB > cnt_BA)
    {
        if(str[len -1] == str[len -2] && str[len-1] == 'b' || str[len -1] == 'b' && str[len -2] == 'a')
            str[len -1] = 'a';
        else if(str[0] == 'a' && str[1] == 'b')
            str[0] = 'b';
    }
    else
    {
         if(str[len-1] == 'a' && str[len - 2] == 'b' || str[len -1] == str[len -2] && str[len-1] == 'a')
             str[len -1] = 'b';
         else
         {
             if(str[0] == 'b' && str[1] == 'b')
                  str[0] = 'a';
         }
    }
    cout<<str<<endl;

}


int main()
{
    int t;
    cin>>t;
    while(t--)
        solve();
}
