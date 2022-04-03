#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v;
    int t= 5;
    while(t--)
    {
        string str;
        cin>>str;
        stringstream geek(str);
        int x = 0;
        geek >> x;
        cout<<str<<"  =  " <<x<<endl;

    }


}
