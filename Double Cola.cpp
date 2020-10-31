#include<bits/stdc++.h>
using namespace std;

int main()
{
    float t,sum=0,res =0,x =0;
    cin>>t;

    for(int i=0; i<100; i++)
    {
        sum += pow(2,i) * 5;
        if(sum >= t)
        {
            sum = sum - (pow(2,i) * 5);
            t = t - sum;
            x = pow(2,i);
            res  = ceil(t / x);
            break;
        }
    }
    if(res == 1)
        cout<<"Sheldon";

    if(res == 2)
        cout<<"Leonard";

    if(res == 3)
        cout<<"Penny";

    if(res == 4)
        cout<<"Rajesh";

    if(res == 5)
        cout<<"Howard";

}
