#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,flag=1,flag1=1;
    scanf("%d",&t);
    int aray[t],aray1[t-1],aray2[t-2];
    for(int i=0; i<t; i++)
    {
        cin>>aray[i];
    }
    for(int i=0; i<t-1; i++)
    {
        cin>>aray1[i];
    }
    for(int i=0; i<t-2; i++)
    {
       cin>>aray2[i];
    }
    sort(aray,aray+t);
    sort(aray1,aray1+t-1);
    sort(aray2,aray2+t-2);
    for(int i=0; i<t-1; i++)
    {
        if(aray[i]!=aray1[i])
        {
            cout<<aray[i]<<endl;
            flag = 0;
            break;
        }
    }
     if(flag==1)
        cout<<aray[t-1]<<endl;
    for(int i=0; i<t-2; i++)
    {
        if(aray1[i]!=aray2[i])
        {
            cout<<aray1[i]<<endl;
            flag1 = 0;
            break;
        }
    }
    if(flag1==1)
       cout<<aray1[t-2]<<endl;

}
