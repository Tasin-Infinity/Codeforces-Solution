#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string str;
    while(getline(cin,str))
    {
        if(str=="")
            break;
        int low=0,high=0,flag=0,flag1=0,clonhigh=0,clonlow=0,flag2=0;
        int len = str.size();
        if(len&1)
            high = (len / 2) +1;
        else
            high = (len / 2);

        low = (len / 2 ) -1;

        while(low >= 0)
        {
            if(str[low] == str[high])
            {
                low--;
                high++;
            }
            else
            {
                flag = 1;
                break;
            }
        }
        if(len&1)
        {
            clonhigh = (len / 2)  ;
            clonlow =  (len / 2 ) ;
        }
        else
        {
            clonhigh = (len / 2);
            clonlow =  (len / 2) -1;
        }
        while(clonlow >= 0)
        {
            if(str[clonlow]=='A' && str[clonhigh] =='A')
                flag1=1;
            else if(str[clonlow]=='E' && str[clonhigh] =='3')
                flag1 = 1;
            else if(str[clonlow]=='H' && str[clonhigh] =='H')
                flag1 = 1;
            else if(str[clonlow]=='I' && str[clonhigh] =='I')
                flag1 = 1;
            else if(str[clonlow]=='J' && str[clonhigh] =='L')
                flag1 = 1;
            else if(str[clonlow]=='L' && str[clonhigh] =='J')
                flag1 = 1;
            else if(str[clonlow]=='M' && str[clonhigh] =='M')
                flag1 = 1;
            else if(str[clonlow]=='O' && str[clonhigh] =='O')
                flag1 = 1;
            else if(str[clonlow]=='S' && str[clonhigh] =='2')
                flag1 = 1;
            else if(str[clonlow]=='T' && str[clonhigh] =='T')
                flag1 = 1;
            else if(str[clonlow]=='U' && str[clonhigh] =='U')
                flag1 = 1;
            else if(str[clonlow]=='V' && str[clonhigh] =='V')
                flag1 = 1;
            else if(str[clonlow]=='W' && str[clonhigh] =='W')
                flag1 = 1;
            else if(str[clonlow]=='X' && str[clonhigh] =='X')
                flag1 = 1;
            else if(str[clonlow]=='Y' && str[clonhigh] =='Y')
                flag1 = 1;
            else if(str[clonlow]=='Z' && str[clonhigh] =='5')
                flag1 = 1;
            else if(str[clonlow]=='1' && str[clonhigh] =='1')
                flag1 = 1;
            else if(str[clonlow]=='2' && str[clonhigh] =='S')
                flag1 = 1;
            else if(str[clonlow]=='3' && str[clonhigh] =='E')
                flag1 = 1;
            else if(str[clonlow]=='5' && str[clonhigh] =='Z')
                flag1 = 1;
            else if(str[clonlow]=='8' && str[clonhigh] =='8')
                flag1 = 1;
            else
            {
                flag2 = 1;
                break;
            }

            clonlow--;
            clonhigh++;
        }

        if(flag == 1 && flag2 == 1)
            cout<<str<<" -- is not a palindrome."<<endl;
        else if(flag ==0 && flag2 == 0)
            cout<<str<<" -- is a mirrored palindrome."<<endl;
        else if(flag == 1 && flag2 == 0)
            cout<<str<<" -- is a mirrored string."<<endl;
        else if(flag ==0 && flag2 == 1)
            cout<<str<<" -- is a regular palindrome."<<endl;

        cout<<endl;
    }
}
